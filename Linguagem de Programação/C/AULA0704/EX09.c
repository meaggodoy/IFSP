#include <stdio.h>

int main()
{
    int num, soma = 0, i;
    
    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        soma += num;
    }
    printf("A soma eh %d", soma);

    return 0;
}
