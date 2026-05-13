#include <stdio.h>
#include <string.h>

int verificarChar(char a[], char b[]) {
    if (strcmp(a, b) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char senha[] = "mundo";
    char usuario[10];
    
    printf("Digite uma palavra-chave: ");
    scanf("%s", &usuario);
    
    int teste = verificarChar(senha, usuario);
    if (teste == 1) {
        printf("Senha autorizada");
    } else {
        printf("Senha bloqueada");
    }
    
    return 0;
}
