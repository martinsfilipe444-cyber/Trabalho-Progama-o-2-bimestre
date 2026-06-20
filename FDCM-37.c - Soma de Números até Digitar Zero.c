#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 37: Somar números até digitar 0

int main() {
    int numero, soma = 0;
    
    printf("Digite números (0 para parar):\n");
    
    scanf("%d", &numero);
    
    while (numero != 0) {
        soma += numero;
        scanf("%d", &numero);
    }
    
    printf("Soma total: %d\n", soma);
    
    return 0;
}

