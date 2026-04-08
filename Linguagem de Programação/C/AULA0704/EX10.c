#include <stdio.h>

int main()
{
    int num, par = 0, i;
    
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            par++;
        }
    }
    printf("Foram %d numeros pares", par);

    return 0;
}
