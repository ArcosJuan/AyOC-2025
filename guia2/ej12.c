#include <stdio.h>
#include <stdint.h>
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

int main() {
    persona_t* rami = crearPersona("Ramiro", 27);
    printf("%s\n", rami->nombre);
    free(rami);
    
    return 0;
}
