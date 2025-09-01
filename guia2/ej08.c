#include <stdio.h>
#include <stdint.h>

int main() {
    // No es lo mismo ya que el puntero str1 puede ser reasignado
    // a otro array de caracteres mientras que str2 no puede ser 
    // reasignado.
    char *str1 = "Hola";
    char str2[] = "Hola";

    printf("%s\n", str1);
    printf("%s\n", str2);
    return 0;
}
