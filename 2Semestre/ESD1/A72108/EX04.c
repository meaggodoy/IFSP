#include <stdio.h>

int primo (int n) {
    int i, cont = 0;
    
    for (i = 1; i <= n; i++) {
        if (n%i == 0)
            cont++;
    }
    
    if (cont == 2) {
        return 1;
    } else
        return 0;
}

int main()
{
    int num, resultado;
    
    printf("Digite um num: ");
    scanf("%d", &num);
    
    resultado = primo(num);
    
    if (resultado == 1)
        printf("Primo");
    else
        printf("Nao");

    return 0;
}