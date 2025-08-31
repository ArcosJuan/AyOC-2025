#include <stdio.h>

int main() {
    int arreglo[] = {1,2,3,4,5};
    size_t size_arreglo = sizeof(arreglo) / sizeof(int);
    
    for (int i=0; i < (int) size_arreglo; i++) {
        int aux0 = arreglo[i];
        arreglo[i] = arreglo[0];
        arreglo[0] = aux0;;
    }

    return 0;
}
