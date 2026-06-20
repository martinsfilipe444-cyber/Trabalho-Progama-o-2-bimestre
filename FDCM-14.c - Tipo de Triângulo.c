#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 14: Classificar tipo de triângulo

int main() {
    float lado1, lado2, lado3;
    
    printf("Digite os três lados do triângulo:\n");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    
    // Verificar se é triângulo válido
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        // Classificar tipo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triângulo Equilátero\n");
        } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Não forma um triângulo válido!\n");
    }
    
    return 0;
}

