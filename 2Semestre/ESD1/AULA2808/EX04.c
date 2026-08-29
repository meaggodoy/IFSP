#include <stdio.h>

char* lerVogais(char c[], char v[]) {
    int i, k = 0;
    
    for (i = 0; c[i] != '\0'; i++)
        if (c[i] == 'A' || c[i] == 'a' || c[i] == 'E' || c[i] == 'e' || c[i] == 'I' || c[i] == 'i' || c[i] == 'O' || c[i] == 'o' || c[i] == 'U' || c[i] == 'u') {
            v[k] = c[i];
            k++;
        }

    v[k] = '\0';
    return v;
}

int main() {
    char cadeia[50], vogais[10];
    
    printf("Digite o texto para conferencia: ");
    fgets(cadeia, sizeof(cadeia), stdin);
    
    printf("As vogais encontradas foram: %s", lerVogais(cadeia, vogais));
}
