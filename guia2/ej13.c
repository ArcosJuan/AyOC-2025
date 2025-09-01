#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* nombre;
    int edad;
} persona_t;


persona_t* crearPersona(char* nombre, int edad) {
    persona_t* new_persona = malloc(sizeof(persona_t));
    new_persona->nombre = nombre;
    new_persona->edad = edad;
    return new_persona;
}

void eliminarPersona(persona_t* persona) {
    free(persona);
}

int main() {
    persona_t* rami = crearPersona("Ramiro", 27);
    printf("%s\n", rami->nombre);
    eliminarPersona(rami);

    return 0;
}
