#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 19: Ordenar 3 números em ordem crescente

int main() {
    int num1, num2, num3, temp;
    
    printf("Digite três números:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Ordenar os três números
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    printf("Em ordem crescente: %d, %d, %d\n", num1, num2, num3);
    
    return 0;
}

