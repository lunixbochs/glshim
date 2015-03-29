#include <stdint.h>

void DecompressBlockDXT1(uint32_t x, uint32_t y, uint32_t width, const uint8_t *blockStorage, uint32_t *image);
void DecompressBlockDXT3(uint32_t x, uint32_t y, uint32_t width, const uint8_t *blockStorage, uint32_t *image);
void DecompressBlockDXT5(uint32_t x, uint32_t y, uint32_t width, const uint8_t *blockStorage, uint32_t *image);
void DecompressDXT(int version, int width, int height, const void *src, void *dst);
