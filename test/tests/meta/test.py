import os
import sys

def walk(base):
    for root, _, files in os.walk(base):
        for name in files:
            yield os.path.join(root, name)

if __name__ == '__main__':
    failed = False
    for name in walk('tests'):
        if name.endswith('.c'):
            with open(name, 'r') as f:
                data = f.read()
            if not 'mock_return;' in data:
                print 'ERROR: "{}" has no mock_return;'.format(name)
                failed = True

    if failed:
        sys.exit(1)
