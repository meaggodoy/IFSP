#include <stdio.h>

int main()
{
    int num, resultado, i;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    for (i = 1; i <= 10; i++) {
    	resultado  = num * i;
    	printf("%d x %d = %d\n", num, i, resultado);
    }

    return 0;
}
