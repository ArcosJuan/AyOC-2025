#include <stdio.h>
#include <stdint.h>

// Si la firma de swap fuese void swap(int a, int b) entonces
// no podriamos intercambiar los valores de x e y porque se 
// pasarian por copia.
// Por lo que no pasaria nada, dentro de swap se cambiarian 
// las direcciones de dos variables que dejarian de poder ser
// referenciables al terminar swap.
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);
    printf("x: %d, y %d\n", x, y); 
    return 0;
}
