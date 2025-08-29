#include <stdint.h>
#include <stdio.h>

int main() {
    int32_t a = 0x0;
    int32_t b = 0b111;
    b = b << 29; // Muevo el valor de b a los 3 bits mas significativos. (Esto es solo para generar el un b valido)

    printf("a = %X \n", a);
    printf("b = %X \n", b);
    char masked_a = a & 0b111;
    char masked_b = (b >> 29) & 0x111; // Muevo los 3 bits mas significativos de b a los primeros 3 bits.

    if (masked_a == masked_b)
    {
        // Usualmente van a ser caracteres 
        printf("Son iguales %c = %c", masked_a, masked_b);
    } else {
        printf("NO son iguales %c != %c", masked_a, masked_b);
    }

    return 0;
}
