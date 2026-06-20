#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 17: Verificar altura mínima para brinquedo

int main() {
    float altura;
    float altura_minima = 1.40; // 1.40m de altura mínima
    
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    
    if (altura >= altura_minima) {
        printf("Você pode andar no brinquedo!\n");
    } else {
        printf("Altura insuficiente. Altura mínima: %.2f m\n", altura_minima);
    }
    
    return 0;
}

