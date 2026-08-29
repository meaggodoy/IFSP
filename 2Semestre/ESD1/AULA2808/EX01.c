#include <stdio.h>

int somaImpares(int v[], int t) {
    int i, soma = 0;
    
    for (i= 0; i < t; i++)
        if (v[i]%2 != 0)
            soma += v[i];
    
    return soma;
}

int main()
{
    int i, tamanho;
    
    printf("Digite quantos numeros deseja digitar: ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    
    for (i = 0; i < tamanho; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    
    printf("A soma dos numeros impares eh: %d", somaImpares(vetor, tamanho));

    return 0;
}
