#include <stdint.h>
#include <stdio.h>

uint16_t rgb(uint8_t r, uint8_t g, uint8_t b) {
    return ((uint16_t)(b >> 3) << 11) | ((uint16_t)(g >> 2) << 5) | (r >> 3);
}

int main() {
    printf("%d", rgb(255, 255, 255));
    return 0;
}