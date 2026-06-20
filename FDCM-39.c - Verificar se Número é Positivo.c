#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 39: Pedir número positivo até acertar

int main() {
    int numero;
    
    printf("Digite um número positivo: ");
    scanf("%d", &numero);
    
    while (numero <= 0) {
        printf("Número inválido! Digite um número positivo: ");
        scanf("%d", &numero);
    }
    
    printf("Número %d é positivo!\n", numero);
    
    return 0;
}

