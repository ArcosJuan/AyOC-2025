#include <stdio.h>

typedef struct {
    char* nombre;
    int vida;
    double ataque;
    double defensa;
} monstruo_t;


monstruo_t evolution(monstruo_t monstruo) {
    monstruo.ataque += 10;
    monstruo.defensa += 10;
    return monstruo;
}

int main() {

    monstruo_t monstruo = { "Pikachu", 100, 20.5, 40.5 };

    printf("%s\n", monstruo.nombre);
    printf("  - Ataque = %f\n", monstruo.ataque);
    printf("  - Defensa = %f\n", monstruo.defensa);

    printf("\n");

    monstruo = evolution(monstruo);

    printf("%s (evolution)\n", monstruo.nombre);
    printf("  - Ataque = %f\n", monstruo.ataque);
    printf("  - Defensa = %f\n", monstruo.defensa);

    return 0;
}
