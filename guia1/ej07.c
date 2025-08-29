#include <stdio.h>

int main() {
    int a = 5, // 0101 
    b = 3,     // 0011
    c = 2,     // 0010
    d = 1;     // 0001
    int res;

    res = a + b * c / d; // 11
    printf("a + b * c / d = %i \n", res);
    res = a % b; // 2
    printf("a porcentage b = %i \n", res);
    res = a == b; // 0
    printf("a == b = %i \n", res);
    res = a != b; // 1
    printf("a != b = %i \n", res);
    res = a & b; // 1, 0101 & 0011 = 0001 (1)
    printf("a & b = %X \n", res);
    res = a | b; // 7, 0101 | 0011 = 0111 (7)
    printf("a | b = %X \n", res);
    res = ~a; // -6, ~0101 = 1010 (-6 en compl 2)
    printf("~a = %X \n", res);
    res = a && b; // 1, 1 = True porque ni a ni b son 0.
    printf("a && b = %X \n", res);
    res = a || b; // 1, 1 = True porque a y b son !=0.
    printf("a || b = %X \n", res);
    res = a << 1; // 10, 0101 << 1 = 0000 0000 0000 1010 (conserva el bit de signo)
    printf("a << 1 = %X \n", res);
    res = a >> 1; // 2,  0101 >> 1 = 0000 0000 0000 0010 (conserva el bit de signo)
    printf("a >> 1 = %X \n", res);
    res = a + b; // 8 (aritmetica básica)
    printf("a + b = %i \n", res);
    res = a - b; // 2 (aritmetica básica)
    printf("a - b = %i \n", res);
    res = a * b; // 15 (aritmetica básica)
    printf("a * b = %i \n", res);
    res = a / b; // 1 (aritmetica básica)
    printf("a / b = %i \n", res);
    res = a % b; // 2 (aritmetica básica)
    printf("a porcentage= b = %i \n", res);

    return 0;
}
