#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 50: Garantir entrada de número positivo

int main() {
    int numero;
    
    do {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);
        
        if (numero <= 0) {
            printf("Número inválido! Digite um número maior que zero.\n");
        }
    } while (numero <= 0);
    
    printf("Você digitou: %d\n", numero);
    
    return 0;
}

