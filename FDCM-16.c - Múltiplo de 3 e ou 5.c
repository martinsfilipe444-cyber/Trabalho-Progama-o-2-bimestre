#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 16: Verificar se é múltiplo de 3 e/ou 5

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("É múltiplo de 3 E 5\n");
    } else if (numero % 3 == 0) {
        printf("É múltiplo de 3\n");
    } else if (numero % 5 == 0) {
        printf("É múltiplo de 5\n");
    } else {
        printf("Não é múltiplo de 3 nem de 5\n");
    }
    
    return 0;
}

