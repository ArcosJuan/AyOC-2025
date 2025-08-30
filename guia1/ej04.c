#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t i8 = 10;
    uint8_t ui8 = 255;
    printf(" int8_t(%ld) %d   \n",   sizeof(i8), i8);
    printf(" uint8_t(%ld)%d \n", sizeof(ui8), ui8);
    return 0;
}