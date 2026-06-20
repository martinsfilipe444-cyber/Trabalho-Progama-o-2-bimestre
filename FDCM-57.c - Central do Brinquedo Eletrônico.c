#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 57: Central de brinquedos

int main() {
    int opcao;
    
    printf("=== CENTRAL DO BRINQUEDO ===\n");
    printf("1 - Luzes\n");
    printf("2 - Sons\n");
    printf("3 - Movimento\n");
    printf("4 - Desligar\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("Ligando luzes...\n");
            printf("*-*-*-*-* LUZES PISCANDO *-*-*-*-*\n");
            break;
        case 2:
            printf("Reproduzindo sons...\n");
            printf("BIP! BEEP! BOOP!\n");
            break;
        case 3:
            printf("Ativando movimento...\n");
            printf("Brinquedo girando...\n");
            break;
        case 4:
            printf("Desligando brinquedo\n");
            break;
        default:
            printf("Opção não reconhecida!\n");
    }
    
    return 0;
}

