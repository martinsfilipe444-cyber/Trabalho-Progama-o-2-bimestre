#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 32: Mostrar o quadrado dos números de 1 a 10

int main() {
    int i;
    
    printf("Número\tQuadrado\n");
    printf("------\t--------\n");
    
    for (i = 1; i <= 10; i++) {
        printf("%d\t%d\n", i, i * i);
    }
    
    return 0;
}

