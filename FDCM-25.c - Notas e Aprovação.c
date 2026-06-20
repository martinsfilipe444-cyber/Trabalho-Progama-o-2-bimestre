#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 25: Calcular média e verificar aprovação

int main() {
    float nota1, nota2, nota3, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("Média: %.2f\n", media);
    
    if (media >= 7.0) {
        printf("APROVADO!\n");
    } else if (media >= 5.0) {
        printf("RECUPERAÇÃO\n");
    } else {
        printf("REPROVADO\n");
    }
    
    return 0;
}

