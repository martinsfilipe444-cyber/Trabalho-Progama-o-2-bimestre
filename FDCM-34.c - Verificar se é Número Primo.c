#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 34: Verificar se número é primo

int main() {
    int numero, i, eh_primo = 1;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero <= 1) {
        printf("%d não é primo\n", numero);
    } else {
        for (i = 2; i < numero; i++) {
            if (numero % i == 0) {
                eh_primo = 0;
                break;
            }
        }
        
        if (eh_primo) {
            printf("%d é PRIMO\n", numero);
        } else {
            printf("%d NÃO é primo\n", numero);
        }
    }
    
    return 0;
}

