#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 22: Verificar se número é par ou ímpar

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("%d é PAR\n", numero);
    } else {
        printf("%d é ÍMPAR\n", numero);
    }
    
    return 0;
}

