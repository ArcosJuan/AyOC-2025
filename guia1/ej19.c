#include <stdio.h>

int g = 10; // Scope global: por lo tanto cada función que no la sobreescriba
// en su scope local puede modificar su valor y este permanecera modificado.

void functionA() {
    int a = 20;
    static int b = 30; // Al declararse static su scope pasa a ser global.
    printf("Dentro de functionA:\n"); 
    printf(" g = %d\n", g); 
    printf(" a = %d\n", a); 
    printf(" b = %d\n", b); 

    g += 5; 
    a += 10;
    b += 5;
}

void functionB() {
    int a = 40;
    static int c = 50; // Al declararse static su scope pasa a ser global.
    printf("Dentro de functionA:\n"); 
    printf(" g = %d\n", g); 
    printf(" a = %d\n", a); 
    printf(" c = %d\n", c); 

    g += 5;
    a += 10;
    c += 5;
}

int main() {
    printf("Dentro de main:\n");
    printf(" g = %d\n", g); // g = 10

    functionA(); // g = 10\n a = 20\n b = 30\n
    functionB(); // g = 15\n a = 40\n c = 50\n
    functionA(); // g = 20\n a = 20\n b = 35\n
    functionB(); // g = 25\n a = 40\n c = 55\n

    printf("\nFinal en main:\n");
    printf(" g = %d\n", g); // g = 30\n

    return 0;
}

