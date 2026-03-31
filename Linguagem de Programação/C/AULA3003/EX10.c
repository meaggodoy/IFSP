#include <stdio.h>

int main()
{
	char inicial;
	int idade;
	float altura;
	
	printf("Digite a inicial do seu nome, sua idade e sua altura: ");
	scanf("%c %d %f", &inicial, &idade, &altura);
	
	printf("A inicial do seu nome eh %c, sua idade %d e sua altura %.2f", inicial, idade, altura);

    return 0;
}
