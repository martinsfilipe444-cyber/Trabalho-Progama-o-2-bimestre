#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 41: Verificar se número é primo com WHILE

int main() {
    int numero, divisor = 2;
    int eh_primo = 1;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero <= 1) {
        printf("%d não é primo\n", numero);
    } else {
        while (divisor < numero) {
            if (numero % divisor == 0) {
                eh_primo = 0;
                break;
            }
            divisor++;
        }
        
        if (eh_primo) {
            printf("%d é PRIMO\n", numero);
        } else {
            printf("%d NÃO é primo\n", numero);
        }
    }
    
    return 0;
}

