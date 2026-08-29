#include <stdio.h>

void imprimirMaioresN(int s[], int t, int n) {
    int i;
    
    printf("Os maiores que N sao:\n");
    for (i = 0; i < t; i++) {
        if (s[i] > n) {
            printf("%d  ", s[i]);
        }
    }
}

int main() {
    int tamanho;
    
    printf("Digite a quantidade de numeros a serem digitados: ");
    scanf("%d", &tamanho);
    
    int sequencia[tamanho], n, i;
    
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor: ");
        scanf("%d", &sequencia[i]);
    }
    
    printf("Digite um valor de referencia: ");
    scanf("%d", &n);
    
    imprimirMaioresN(sequencia, tamanho, n);
}