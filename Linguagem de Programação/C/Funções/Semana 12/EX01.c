#include <stdio.h>

void verificaNumero(int n) {
    if (n > 0) {
        printf("POSITIVO");
    } else if (n < 0) {
        printf("NEGATIVO");
    } else {
        printf("Zero");
    }
}

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    verificaNumero(num);

    return 0;
}
