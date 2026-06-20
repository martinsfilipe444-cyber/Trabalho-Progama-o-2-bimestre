#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 15: Calcular quantas caixas cabem no caminhão

int main() {
    float altura_caixa, altura_caminhao;
    int quantidade;
    
    printf("Digite a altura da caixa (em cm): ");
    scanf("%f", &altura_caixa);
    
    printf("Digite a altura do caminhão (em cm): ");
    scanf("%f", &altura_caminhao);
    
    // Calcular quantas caixas cabem
    if (altura_caixa > 0 && altura_caminhao > 0) {
        quantidade = (int)(altura_caminhao / altura_caixa);
        printf("Cabem %d caixas no caminhão\n", quantidade);
    } else {
        printf("Valores inválidos!\n");
    }
    
    return 0;
}

