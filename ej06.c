#include <stdio.h>

int main() {
    int mensaje_secreto[] = {
        116, 104, 101, 32, 103, 105, 102,
        116, 32, 111, 102, 32, 119, 111, 114,
        100, 115, 32, 105, 115, 32, 116, 104,
        101, 32, 103, 105, 102, 116, 32, 111,
        102, 32, 100, 101, 99, 101, 112, 116,
        105, 111, 110, 32, 97, 110, 100, 32,
        105, 108, 108, 117, 115, 105, 111, 110
    };

    // La variable length es de tipo size_t porque el tipo size_t tiene el tamaño suficiente para almacenar cualquier tamaño de variable.
    size_t length = sizeof(mensaje_secreto);

    char decoded[length]; // Se castea el array completo entonces se toma de a 1 byte en lugar de los 4 bytes del int. Eso genera la salida rara que se ve en el segundo ciclo.

    for (int i=0; i < length; i++) {
        decoded[i] = (char) (mensaje_secreto[i]);

    }

    for (int i = 0; i < length; i++) {
        printf("%c", decoded[i]);
    }

    return 0;
}
