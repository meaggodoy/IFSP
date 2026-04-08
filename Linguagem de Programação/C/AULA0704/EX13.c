#include <stdio.h>

int main()
{
    int idade, maior = -1, i;
    
    for (i = 0; i < 5; i++) {
        printf("Digite uma idade: ");
        scanf("%d", &idade);
        
        if (idade > maior) {
            maior = idade;
        }
    }
    printf("A maior idade eh %d", maior);

    return 0;
}
