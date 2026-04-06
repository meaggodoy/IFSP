#include <stdio.h>

int main()
{
    int ano;
    
    printf("Digite o ano atual: ");
    scanf("%d", &ano);
    
    if (ano % 4 == 0) {
        if (ano % 100 != 0) {
            printf("O ano eh bissexto");
        }
    } else if (ano % 400 == 0) {
        printf("O ano eh bissexto");
    } else {
        printf("O ano nao eh bissexto");
    }

    return 0;
}
