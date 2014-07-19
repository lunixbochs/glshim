import argparse
import jinja2
import os
import signal
import subprocess
import sys
import traceback

from blessings import Terminal
from contextlib import contextmanager

signals = dict((k, v) for v, k in signal.__dict__.iteritems() if v.startswith('SIG'))
term = Terminal()
TEST_ROOT = os.getcwd()

env = jinja2.Environment(
    trim_blocks=True,
    lstrip_blocks=True,
    loader=jinja2.FileSystemLoader(os.path.join(TEST_ROOT, 'util', 'template')),
)


@contextmanager
def chdir(d):
    old = os.getcwd()
    os.chdir(d)
    yield
    os.chdir(old)


def shell(*args, **kwargs):
    p = subprocess.Popen(args, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    output = p.communicate(kwargs.get('input', ''))
    out = '\n'.join(((output[0] or '').strip(), (output[1] or '').strip()))
    if p.returncode < 0:
        sig = signals.get(-p.returncode)
        if sig is not None:
            out += '\n' + sig
    return out.strip(), p.returncode


def walk(base):
    for root, _, files in os.walk(base):
        for name in files:
            yield os.path.join(root, name)


class Test:
    def __init__(self, path, tail):
        self.path = path
        self.name = os.path.splitext(tail)[0].strip('/')
        self.exe = os.path.basename(self.name)
        self.dir = self.name.rsplit(self.exe, 1)[0].strip('/')
        self.ran = False
        self.success = None
        self.build_failed = False
        self.output = ''

    @classmethod
    def find(cls, base, filt):
        tests = []
        for path in walk(base):
            tail = path.replace(base, '', 1)
            test = None
            if path.endswith('.c'):
                test = Test(path, tail)
            elif path.endswith('.py'):
                test = PythonTest(path, tail)
            else:
                continue

            if test and filt:
                for f in filt:
                    if test.name.startswith(f):
                        break
                else:
                    continue

            tests.append(test)
        return tests

    @property
    def status(self):
        if self.build_failed:
            return 'build failed'
        elif not self.ran:
            return 'skipped'
        return 'pass' if self.success else 'fail'

    @property
    def status_color(self):
        if self.build_failed:
            return term.red
        elif not self.ran:
            return term.yellow
        return term.green if self.success else term.red

    def build(self, project):
        junk_dir = os.path.join(TEST_ROOT, 'build')
        bin_dir = os.path.join(TEST_ROOT, 'bin', self.name)
        if not os.path.exists(junk_dir):
            os.makedirs(junk_dir)

        cmakelists = os.path.join(junk_dir, 'CMakeLists.txt')
        t = env.get_template('CMakeLists.txt.j2')
        txt = t.render(
            project=args.project,
            exe=self.exe,
            sources=self.path,
            bin_dir=bin_dir,
            util=os.path.join(TEST_ROOT, 'util'),
        )
        with open(cmakelists, 'w') as f:
            f.write(txt)

        out, status = shell('cmake', cmakelists)
        if status:
            self.output = out
            self.build_failed = True
            return False

        with chdir(junk_dir):
            out, status = shell('make', '-j2')
            if status:
                self.output = out
                self.build_failed = True
                return False
        return True

    def run(self):
        bin_dir = os.path.join(TEST_ROOT, 'bin', self.name)
        with chdir(bin_dir):
            self.output, status = shell('./test')
            self.ran = True
            self.success = (status == 0)
        return self.success

    def __repr__(self):
        if self.ran:
            return '<Test: {} ({})>'.format(self.name, self.status)
        else:
            return '<Test: {}>'.format(self.name)


class PythonTest(Test):
    def build(self, project):
        return True

    def run(self):
        with chdir(TEST_ROOT):
            self.output, status = shell('python', self.path)
            self.ran = True
            self.success = (status == 0)
            return False

def run(args):
    tests = Test.find(args.base, args.tests)
    if not tests:
        print 'No tests!'
        return

    step_fmt = lambda step: term.bold('[' + step + ']')
    status_fmt = lambda test: term.bold('[' + test.status_color(test.status) + ']')
    back = lambda mult: '\b' * mult
    out = lambda *a: (sys.stdout.write(' '.join(str(s) for s in a)), sys.stdout.flush())

    for i, test in enumerate(tests):
        headline = '[{}/{}] {} ['.format(i + 1, len(tests), test.name)
        print term.bold(headline.ljust(79, '-')),
        out(back(8) + ' ' + step_fmt('build'))

        try:
            build = test.build(args.project)
        except Exception:
            test.build_failed = True
            print
            traceback.print_exc()

        out(back(7) + step_fmt(' run '))
        if not test.build_failed:
            try:
                success = test.run()
            except Exception:
                test.ran = True
                success = test.success = False
                print
                traceback.print_exc()

        out(back(max(7, len(test.status) + 3)) + '  ' + status_fmt(test))
        print

        if test.output:
            for line in test.output.split('\n'):
                if line.startswith('ERROR'):
                    line = line.replace('ERROR:', term.red('ERROR:'), 1)
                elif line.startswith('WARNING'):
                    line = line.replace('WARNING:', term.yellow('WARNING:'), 1)
                print '> {}'.format(line)

    passed = sum(t.success for t in tests if t.ran)
    total = sum(t.ran for t in tests)
    results = '{} / {} passed, {} skipped '.format(passed, total, len(tests) - total)

    if total > 0:
        pc = passed / float(total) * 100
        percent = '{:.2f}%'.format(pc)
        if passed == total:
            percent = term.green('100%')
        elif pc < 75:
            percent = term.red(percent)
        else:
            percent = term.yellow(percent)
        print term.bold((results + '[{}]').format(percent).rjust(80 + len(term.green(''))))
        print


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Build and run tests.')
    parser.add_argument('--project', help='project directory', default='.')
    parser.add_argument('--base', help='test directories to search', required=True)
    parser.add_argument('tests', help='test names to run (all by default)', nargs='*')
    args = parser.parse_args()
    run(args)
