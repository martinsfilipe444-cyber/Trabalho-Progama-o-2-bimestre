#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 27: Mostrar tabuada de um número

int main() {
    int numero, i;
    
    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &numero);
    
    printf("Tabuada do %d:\n", numero);
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}

