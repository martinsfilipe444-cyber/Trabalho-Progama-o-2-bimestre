#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 47: Mostrar tabuada com DO...WHILE

int main() {
    int numero, i = 1;
    
    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &numero);
    
    printf("Tabuada do %d:\n", numero);
    
    do {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    } while (i <= 10);
    
    return 0;
}

