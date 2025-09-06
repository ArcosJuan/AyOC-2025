#include <stdio.h>
#include <stdlib.h>

void allocateArray (int* arr, int size, int value) {
    // Hace espacio en el heap para almacenar un array de tamaño size. Y almacena el puntero a dicho espacio en el argumento arr.
    arr = (int*)malloc(size * sizeof(int));
    // Si el array es vacio no asigna ningún valor obviamente. De lo contrario inicializa todos los valores con el valor del argumento value.
    if(arr != NULL) {
        for (int i=0; i<size; i++) {
            arr[i] = value;
        }
    }
}

int main() {
    int *vector = NULL; 
    // Va a allocar espacio para un array de 5 elementos enteros e inicializar el valor de todos sus elementos a 45. Va a guardar el puntero a la direccion de memoria en el puntero vector.
    allocateArray(vector, 5, 45);
    for (int i = 0; i < 5; i++) {
        // Imprime el valor de todos los elementos del array, que van a ser 45 45 45 45 45
        printf("%d\n", vector[i]);
    }
    // Libera el espacio de memoria allocado por vector
    free(vector);
}

