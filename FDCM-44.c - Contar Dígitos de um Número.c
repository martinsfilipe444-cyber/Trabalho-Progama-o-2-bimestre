#include <stdio.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 44: Contar quantos dígitos tem um número

int main() {
    int numero, contador = 0;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero == 0) {
        contador = 1;
    } else {
        if (numero < 0) numero = -numero; // Tornar positivo
        
        while (numero > 0) {
            numero /= 10;
            contador++;
        }
    }
    
    printf("Quantidade de dígitos: %d\n", contador);
    
    return 0;
}

