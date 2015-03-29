#include "dxt.h"

void DecompressDXT(int version, int width, int height, const void *src, void *dst) {
    uintptr_t src_pos = (uintptr_t)src;
    for (int y = 0; y < height; y += 4) {
        for (int x = 0; x < width; x += 4) {
            switch (version) {
                case 1:
                    DecompressBlockDXT1(x, y, width, (uint8_t *)src_pos, (uint32_t *)dst);
                    src_pos += 8;
                    break;
                case 3:
                    DecompressBlockDXT3(x, y, width, (uint8_t *)src_pos, (uint32_t *)dst);
                    src_pos += 16;
                    break;
                case 5:
                    DecompressBlockDXT5(x, y, width, (uint8_t *)src_pos, (uint32_t *)dst);
                    src_pos += 16;
                    break;
            }
        }
    }
}
