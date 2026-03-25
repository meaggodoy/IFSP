#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("O numero eh PAR");
    } else {
        printf("O numero eh IMPAR");
    }
    
    return 0;
}
