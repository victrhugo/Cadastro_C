#include <stdio.h>
#include <string.h>

#define MAX_LEN 50


void cadastrar(char login, charsenha) {
    printf("Digite o login: ");
    fgets(login, MAX_LEN, stdin);
    login[strcspn(login, "\n")] = 0;

    printf("Digite a senha: ");
    fgets(senha, MAX_LEN, stdin);
    senha[strcspn(senha, "\n")] = 0;
}


int autenticar(const char login, const charsenha) {
    char loginInput[MAX_LEN];
    char senhaInput[MAX_LEN];

    printf("Digite o login: ");
    fgets(loginInput, MAX_LEN, stdin);
    loginInput[strcspn(loginInput, "\n")] = 0;

    printf("Digite a senha: ");
    fgets(senhaInput, MAX_LEN, stdin);
    senhaInput[strcspn(senhaInput, "\n")] = 0;


    if (strcmp(login, loginInput) == 0 && strcmp(senha, senhaInput) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char login[MAX_LEN];
    char senha[MAX_LEN];


    printf("Cadastro de novo usuário\n");
    cadastrar(login, senha);


    printf("\nTente fazer login\n");
    if (autenticar(login, senha)) {
        printf("Login bem-sucedido!\n");
    } else {
        printf("Login falhou. Verifique seu login e senha.\n");
    }

    return 0;
}