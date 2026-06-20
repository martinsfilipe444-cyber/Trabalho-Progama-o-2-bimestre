#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 33: Listar múltiplos de 3 entre 1 e 30

int main() {
    int i;
    
    printf("Múltiplos de 3 entre 1 e 30:\n");
    
    for (i = 1; i <= 30; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}

