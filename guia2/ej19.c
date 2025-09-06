#include <stdio.h>
int main() {
    int matrix[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    // p apunta al int en la fila 0, column 0
    int *p = &matrix[0][0];

    // ¿Qué es reshape?
    // reshape es un array bidimencional de 2x2 enteros.
    // Apunta a los primeros 4 valores de p. Por lo que es:
    // {1, 2},
    // {3, 4}
    int (*reshape)[2] = (int (*)[2]) p;


    printf("%d\n", p[3]); // Qué imprime esta línea?
    // La linea imprime 4. 
    printf("%d\n", reshape[1][1]);
    // La linea imprime 4.
    return 0;
}
