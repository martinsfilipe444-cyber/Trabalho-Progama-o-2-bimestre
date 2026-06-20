#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 28: Calcular soma dos 100 primeiros números naturais

int main() {
    int i, soma = 0;
    
    for (i = 1; i <= 100; i++) {
        soma += i;
    }
    
    printf("Soma dos 100 primeiros números: %d\n", soma);
    
    return 0;
}

