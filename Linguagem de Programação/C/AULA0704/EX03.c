#include <stdio.h>

int main()
{
    float nota;
    
    printf("Digite uma nota: ");
    scanf("%f", &nota);
    
    if (nota >= 6) {
        printf("Aprovado");
    } else if (nota >= 4) {
        printf("Recuperacao");
    } else {
        printf("Reprovado");
    }

    return 0;
}
