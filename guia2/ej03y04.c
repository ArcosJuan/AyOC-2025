#include <stdio.h>


// x es una variable de tipo entero, mientras que &x es la 
// dirección de memoria en el que se almacena el valor x.

// p es un puntero a x, es decir que almacena la dirección 
// de memoria de x, mientras que *p es el valor que hay almacenado
// en la dirección de memoria que almacena p, es decir el valor de x.

int main() {
    int x = 42; 
    int *p = &x;

    // Imprime la dirección de x y el valor de x.
    printf("Direccion de x: %p Valor: %d\n", (void*) &x, x);
    // Imprime la dirección en la que se encuentra almacenado el puntero p y el valor de p,
    // que es la dirección de memoria de x.
    printf("Direccion de p: %p Valor: %p\n", (void*) &p, (void*) p);
    // Imprime el valor de la dirección almacenada en p, es decir, el valor de x (42).
    printf("Valor de lo que apunta p: %d\n", *p);

    return 0;
}
