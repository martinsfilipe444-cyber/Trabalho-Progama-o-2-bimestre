#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 60: Validador de dias da semana

int main() {
    int dia;
    
    printf("Digite um número de 1 a 7 para o dia da semana:\n");
    printf("(1=Segunda, 2=Terça, 3=Quarta, 4=Quinta,\n");
    printf(" 5=Sexta, 6=Sábado, 7=Domingo)\n");
    printf("Digite o número: ");
    scanf("%d", &dia);
    
    switch (dia) {
        case 1:
            printf("Segunda-feira - Dia útil\n");
            break;
        case 2:
            printf("Terça-feira - Dia útil\n");
            break;
        case 3:
            printf("Quarta-feira - Dia útil\n");
            break;
        case 4:
            printf("Quinta-feira - Dia útil\n");
            break;
        case 5:
            printf("Sexta-feira - Dia útil\n");
            break;
        case 6:
            printf("Sábado - Fim de semana\n");
            break;
        case 7:
            printf("Domingo - Fim de semana\n");
            break;
        default:
            printf("Dia inválido! Digite um número de 1 a 7.\n");
    }
    
    return 0;
}

