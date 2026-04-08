#include <stdio.h>

int main()
{
    int num, positivo = 0, i, negativo = 0;
    
    for (i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if (num > 0) {
            positivo++;
        } else if (num < 0) {
            negativo++;
        }
    }
    printf("Foram %d numeros positivos e %d negativos", positivo, negativo);

    return 0;
}
