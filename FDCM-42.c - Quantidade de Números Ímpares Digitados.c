#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 42: Contar quantos números ímpares foram digitados

int main() {
    int numero, contador = 0;
    
    printf("Digite números (0 para parar):\n");
    scanf("%d", &numero);
    
    while (numero != 0) {
        if (numero % 2 != 0) {
            contador++;
        }
        scanf("%d", &numero);
    }
    
    printf("Total de números ímpares: %d\n", contador);
    
    return 0;
}

