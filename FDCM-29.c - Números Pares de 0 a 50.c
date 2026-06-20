#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 29: Listar números pares de 0 a 50

int main() {
    int i;
    
    printf("Números pares de 0 a 50:\n");
    
    for (i = 0; i <= 50; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}

