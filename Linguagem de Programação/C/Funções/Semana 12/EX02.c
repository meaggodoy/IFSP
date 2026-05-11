#include <stdio.h>

int verificaNumero(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (verificaNumero(num) == 1) {
        printf("PAR");
    } else {
        printf("Impar");
    }

    return 0;
}
