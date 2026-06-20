#include <stdio.h>
#include <string.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 49: Validar senha com DO...WHILE

int main() {
    char senha[50];
    char senha_correta[50] = "admin123";
    
    do {
        printf("Digite a senha: ");
        scanf("%s", senha);
        
        if (strcmp(senha, senha_correta) != 0) {
            printf("Senha incorreta! Tente novamente.\n");
        }
    } while (strcmp(senha, senha_correta) != 0);
    
    printf("Acesso liberado!\n");
    
    return 0;
}

