#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 58: Calculadora simples

int main() {
    float num1, num2;
    int operacao;
    float resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("\nEscolha a operação:\n");
    printf("1 - Adição (+)\n");
    printf("2 - Subtração (-)\n");
    printf("3 - Multiplicação (*)\n");
    printf("4 - Divisão (/)\n");
    printf("Digite a opção: ");
    scanf("%d", &operacao);
    
    switch (operacao) {
        case 1:
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
    }
    
    return 0;
}

