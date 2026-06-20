#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 40: Mostrar tabuada com WHILE

int main() {
    int numero, i = 1;
    
    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &numero);
    
    printf("Tabuada do %d:\n", numero);
    
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }
    
    return 0;
}

