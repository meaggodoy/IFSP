#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    
    printf("Digite as duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    
    media = (nota1 + nota2) / 2;
    printf("Media: %.2f\n", media);
    
    if (media >= 6) {
        printf("Aprovado");
    } else if (media >= 4 && media < 6) {
        printf("Recuperacao");
    } else {
        printf("Reprovado");
    }

    return 0;
}
