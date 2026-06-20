#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 23: Encontrar o maior entre dois números

int main() {
    float num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    if (num1 > num2) {
        printf("%.2f é maior\n", num1);
    } else if (num2 > num1) {
        printf("%.2f é maior\n", num2);
    } else {
        printf("Os números são iguais\n");
    }
    
    return 0;
}

