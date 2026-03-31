#include <stdio.h>

int main()
{
	int num1, num2, quociente, resto;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &num1, &num2);
	
	quociente = num1 / num2;
	resto = num1 % num2;
	
	printf("O quociente eh %d e o resto eh %d", quociente, resto);
	
	return 0;
}
