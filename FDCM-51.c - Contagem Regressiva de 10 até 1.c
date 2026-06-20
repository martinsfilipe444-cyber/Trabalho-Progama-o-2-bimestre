#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 51: Contagem regressiva com DO...WHILE

int main() {
    int i = 10;
    
    printf("Contagem regressiva:\n");
    
    do {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    
    printf("\n");
    
    return 0;
}

