#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 24: Verificar se pessoa pode votar

int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Você pode votar!\n");
    } else {
        printf("Você ainda não pode votar\n");
    }
    
    return 0;
}

