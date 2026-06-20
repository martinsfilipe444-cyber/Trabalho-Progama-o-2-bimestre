#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 20: Verificar se ano é bissexto

int main() {
    int ano;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto!\n", ano);
    } else {
        printf("%d NÃO é um ano bissexto!\n", ano);
    }
    
    return 0;
}

