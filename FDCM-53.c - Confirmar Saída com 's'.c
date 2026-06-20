#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 53: Confirmar saída do programa

int main() {
    char confirmacao;
    
    do {
        printf("\nDeseja sair do programa? (s/n): ");
        scanf(" %c", &confirmacao);
        
        if (confirmacao != 's' && confirmacao != 'n') {
            printf("Entrada inválida! Digite 's' ou 'n'.\n");
        }
    } while (confirmacao != 's' && confirmacao != 'n');
    
    if (confirmacao == 's') {
        printf("Encerrando programa...\n");
    } else {
        printf("Continuando...\n");
    }
    
    return 0;
}

