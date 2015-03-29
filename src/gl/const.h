#ifndef CONST_H
#define CONST_H

#ifdef __linux__
#include <linux/limits.h>
#endif

#ifndef PATH_MAX
#define PATH_MAX 254
#endif

#define COMPRESSED_RGB_S3TC_DXT1_EXT  0x83F0
#define COMPRESSED_RGBA_S3TC_DXT1_EXT 0x83F1
#define COMPRESSED_RGBA_S3TC_DXT3_EXT 0x83F2
#define COMPRESSED_RGBA_S3TC_DXT5_EXT 0x83F3

#endif
