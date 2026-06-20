#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 43: Somar todos os pares entre 1 e 100

int main() {
    int i = 2, soma = 0;
    
    while (i <= 100) {
        soma += i;
        i += 2;
    }
    
    printf("Soma dos números pares de 1 a 100: %d\n", soma);
    
    return 0;
}

