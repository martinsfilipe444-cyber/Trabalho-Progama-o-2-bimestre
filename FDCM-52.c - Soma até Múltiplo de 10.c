#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 52: Somar números até resultado ser múltiplo de 10

int main() {
    int numero, soma = 0;
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        soma += numero;
        printf("Soma atual: %d\n", soma);
    } while (soma % 10 != 0);
    
    printf("Soma final é múltiplo de 10: %d\n", soma);
    
    return 0;
}

