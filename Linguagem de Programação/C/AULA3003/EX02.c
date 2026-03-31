#include <stdio.h>

int main()
{
    char nome[30];
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    
    printf("Seja bem-vindo %s", nome);

    return 0;
}
