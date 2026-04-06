#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade >= 60) {
        printf("Idoso");
    } else if (idade >= 18) {
        printf("Adulto");
    } else if (idade >= 12) {
        printf("Adolescente");
    } else {
        printf("Crianca");
    }

    return 0;
}
