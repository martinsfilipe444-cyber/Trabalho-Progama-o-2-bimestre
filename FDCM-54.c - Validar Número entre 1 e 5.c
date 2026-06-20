#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 54: Validar número entre 1 e 5

int main() {
    int numero;
    
    do {
        printf("Digite um número entre 1 e 5: ");
        scanf("%d", &numero);
        
        if (numero < 1 || numero > 5) {
            printf("Número fora do intervalo! Tente novamente.\n");
        }
    } while (numero < 1 || numero > 5);
    
    printf("Você digitou: %d\n", numero);
    
    return 0;
}

