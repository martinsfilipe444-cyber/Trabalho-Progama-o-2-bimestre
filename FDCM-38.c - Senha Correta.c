#include <stdio.h>
#include <string.h>

// Nome: Filipe Do Carmo Martins
// RA: 0026409
// Exercício 38: Pedir senha até acertar

int main() {
    char senha[50];
    char senha_correta[50] = "1234";
    
    printf("Digite a senha: ");
    scanf("%s", senha);
    
    while (strcmp(senha, senha_correta) != 0) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%s", senha);
    }
    
    printf("Acesso liberado!\n");
    
    return 0;
}

