#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 46: Contar de 1 a 10 com DO...WHILE

int main() {
    int i = 1;
    
    printf("Contagem de 1 a 10:\n");
    
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    
    printf("\n");
    
    return 0;
}

