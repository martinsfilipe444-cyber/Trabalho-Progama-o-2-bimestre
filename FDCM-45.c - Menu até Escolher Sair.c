#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 45: Menu com opção de sair

int main() {
    int opcao;
    
    while (1) {
        printf("\n=== MENU ===\n");
        printf("1 - Opção 1\n");
        printf("2 - Opção 2\n");
        printf("3 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            printf("Você escolheu a opção 1\n");
        } else if (opcao == 2) {
            printf("Você escolheu a opção 2\n");
        } else if (opcao == 3) {
            printf("Até logo!\n");
            break;
        } else {
            printf("Opção inválida!\n");
        }
    }
    
    return 0;
}

