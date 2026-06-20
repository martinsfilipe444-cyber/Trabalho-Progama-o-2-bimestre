#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 55: Ler números até digitar negativo, mostrar o maior

int main() {
    int numero, maior = -999999;
    int primeiro = 1;
    
    printf("Digite números (negativo para parar):\n");
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if (numero >= 0) {
            if (primeiro) {
                maior = numero;
                primeiro = 0;
            } else {
                if (numero > maior) {
                    maior = numero;
                }
            }
        }
    } while (numero >= 0);
    
    printf("O maior número digitado foi: %d\n", maior);
    
    return 0;
}

