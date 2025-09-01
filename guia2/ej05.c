#include <stdio.h>
#include <stdint.h>

int main() {
    // x e y tienen distintos tipos porque los 8 bits que almacenan 
    // tienen distinta representación binaria. uint8_t almacena 8 bits
    // sin en sin signo, mientras que int8_t en complemento a 2
    uint8_t *x = (uint8_t*) 0xF0;
    int8_t *y = (int8_t*) 0xF6;

    printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
    printf("Dir de y: %p Valor: %d\n", (void*) y, *y);

    //Devolverá:
    // Dir de x: 0xF0 Valor: 255
    // Dir de y: 0xF6 Valor: -128
    return 0;
}
