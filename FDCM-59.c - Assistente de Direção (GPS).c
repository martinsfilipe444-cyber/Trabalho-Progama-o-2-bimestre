#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 59: GPS - Assistente de direção

int main() {
    int direcao;
    
    printf("=== GPS - ASSISTENTE DE DIREÇÃO ===\n");
    printf("Qual direção você deseja ir?\n");
    printf("1 - Norte\n");
    printf("2 - Sul\n");
    printf("3 - Leste\n");
    printf("4 - Oeste\n");
    printf("Digite a opção: ");
    scanf("%d", &direcao);
    
    switch (direcao) {
        case 1:
            printf("Seguindo para NORTE\n");
            printf("Distância: 5 km\n");
            printf("Tempo estimado: 10 minutos\n");
            break;
        case 2:
            printf("Seguindo para SUL\n");
            printf("Distância: 8 km\n");
            printf("Tempo estimado: 15 minutos\n");
            break;
        case 3:
            printf("Seguindo para LESTE\n");
            printf("Distância: 6 km\n");
            printf("Tempo estimado: 12 minutos\n");
            break;
        case 4:
            printf("Seguindo para OESTE\n");
            printf("Distância: 7 km\n");
            printf("Tempo estimado: 14 minutos\n");
            break;
        default:
            printf("Direção inválida!\n");
    }
    
    return 0;
}

