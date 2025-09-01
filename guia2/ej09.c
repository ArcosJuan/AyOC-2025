#include <stdio.h>
#include <stdint.h>

void aMayusculas(char* string) {
    while (*string != '\0') {
        if (*string <= 'z' && *string >= 'a') {
            *string = 'A' + ((*string) - 'a');
        }
        string++;
    }
}

int main() {
    char palabra[] = "Despite the odds being against him Hakari showed no sign of hesitation.\n";
    aMayusculas(palabra);
    printf("%s", palabra);
    return 0;
}
