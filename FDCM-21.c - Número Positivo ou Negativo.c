#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 21: Classificar número como positivo, negativo ou zero

int main() {
    float numero;
    
    printf("Digite um número: ");
    scanf("%f", &numero);
    
    if (numero > 0) {
        printf("Número positivo\n");
    } else if (numero < 0) {
        printf("Número negativo\n");
    } else {
        printf("Número é zero\n");
    }
    
    return 0;
}

