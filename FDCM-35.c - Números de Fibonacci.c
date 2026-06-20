#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 35: Gerar n primeiros números de Fibonacci

int main() {
    int n, i;
    long fib1 = 0, fib2 = 1, proximo;
    
    printf("Quantos números de Fibonacci deseja? ");
    scanf("%d", &n);
    
    printf("Sequência de Fibonacci:\n");
    
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%ld ", fib1);
        } else if (i == 2) {
            printf("%ld ", fib2);
        } else {
            proximo = fib1 + fib2;
            printf("%ld ", proximo);
            fib1 = fib2;
            fib2 = proximo;
        }
    }
    printf("\n");
    
    return 0;
}

