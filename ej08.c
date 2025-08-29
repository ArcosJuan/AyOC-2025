#include <stdio.h>

int main() {
    int a = 0;
    for (int i=0; i < 10; i++)
    {
        // Devuelve a y luego suma 1.
        // Por eso el primer print es 0.
        printf("%d, ", a++);
    }

    printf("\n");

    int b = 0;
    for (int i=0; i < 10; i++)
    {
        // Suma 1 a b y luego lo devuelve.
        // Por eso el primer print es 1.
        printf("%d, ", ++b);
    }
    printf("\n");

    return 0;
}
