#include <stdio.h>

int main() {
    char c = 100;
    unsigned char uc = 255; 
    short s = 32767; 
    unsigned short us = 40000;
    int i = 800000;
    unsigned u = 400000;
    long l = 9; // Dependiendo del procesador (64 o 32 bits) puede variar su tamaño entre 64 y 32 bits
    unsigned long ul = 90;
    long long ll = 90; // Sin importar la arquitectura su tamaño es al menos 65 bits.
    unsigned long long ull = 90;

    printf(" char(%lu) %d  \n",                 sizeof(c),     c);
    printf(" unsigned char(%lu) %d  \n",        sizeof(uc),   uc);
    printf(" short(%lu) %d  \n",                sizeof(s),     s);
    printf(" unsigned short(%lu) %d  \n",       sizeof(us),   us);
    printf(" int (%lu) %d  \n",                 sizeof(i),     i);
    printf(" unsigned(%lu) %d  \n",             sizeof(u),     u);
    printf(" long(%lu) %ld  \n",                sizeof(l),     l);
    printf(" unsigned long(%lu) %ld  \n",       sizeof(ul),   ul);
    printf(" long long(%lu) %lld  \n",          sizeof(ll),   ll);
    printf(" unsigned long long(%lu) %lld  \n", sizeof(ull), ull);

    // Punteros (Su tamaño en una arquitectura de 64 bits es de 64 bits (8bytes))
    printf("PUNTEROS"); 
    char*  p_c = &c;
    short* p_s = &s; 
    int*   p_i = &i;
    long*  p_l = &l; 

    printf(" char*(%ld) %s   \n",   sizeof(p_c), p_c);
    printf(" short*(%ld)%hn \n", sizeof(p_s), p_s);
    printf(" int* (%ld) %ls  \n",  sizeof(p_i), p_i);
    printf(" long*(%ld) %ln  \n",  sizeof(p_l), p_l);
    return 0;
}