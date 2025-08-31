#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arreglo[6] = {0};
    int timee = time(NULL);
    srand(timee);   
    for (int i = 0; i < 6*(10e6); i++) {
        srand(timee+i);   
        arreglo[rand() % 6] += 1;
    }
    
    for (int i = 0; i < 6; i++) {
        printf("%d = %d\n", i+1, arreglo[i]);
    }

    return 0;
}
