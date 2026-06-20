#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 48: Menu com DO...WHILE

int main() {
    int opcao;
    
    do {
        printf("\n=== MENU ===\n");
        printf("1 - Cadastro\n");
        printf("2 - Consulta\n");
        printf("3 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Cadastrando...\n");
                break;
            case 2:
                printf("Consultando...\n");
                break;
            case 3:
                printf("Até logo!\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 3);
    
    return 0;
}

