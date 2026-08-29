#include <stdio.h>

int encontrarPontuacao(char c[]) {
    int i, contador = 0;
    
    for (i = 0; c[i] != '\0'; i++)
        if (c[i] == '.' || c[i] == ';' || c[i] == ',' || c[i] == '!' || c[i] == '?')
            contador++;

    return contador;
}

int main() {
    char cadeia[50];
    
    printf("Digite o texto para conferencia: ");
    fgets(cadeia, sizeof(cadeia), stdin);
    
    printf("A quantidade de caracteres especiais encontrados foi: %d", encontrarPontuacao(cadeia));
}