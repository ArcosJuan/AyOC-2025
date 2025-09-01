#include <stdio.h>

typedef struct {
    char* nombre;
    int vida;
    double ataque;
    double defensa;
} monstruo_t;

int main() {

    monstruo_t monstruos[4] = {
        { "Pikachu", 100, 20.5, 40.5 },
        { "Hunter", 250, 30.5, 20.5 },
        { "Golem", 300, 50.5, 100 },
        { "Articuno", 500, 100.5, 200 }
    };

    for (int i = 0; i < 4; i++) {
        printf("Monstruo: %s\n", monstruos[i].nombre);
        printf("  - vida = %d\n", monstruos[i].vida);
    }

    return 0;
}
