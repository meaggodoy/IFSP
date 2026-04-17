#include <stdio.h>

int main() {
	char operador;
	float x, y, resultado;
	int opcao;
	
	do {
		printf("Menu\n'+' soma\n'-' subtracao\n'*' multiplicacao\n'/' divisao\nDigite um operador: ");
		scanf(" %c", &operador);
		
		switch (operador) {
			case '+':
				printf("Digite dois numeros: ");
				scanf("%f %f", &x, &y);
				
				resultado = x + y;
				printf("A soma eh %.2f", resultado);
				break;
			case '-':
				printf("Digite dois numeros: ");
				scanf("%f %f", &x, &y);
				
				resultado = x - y;
				printf("A subtracao eh %.2f", resultado);
				break;
			case '*':
				printf("Digite dois numeros: ");
				scanf("%f %f", &x, &y);
				
				resultado = x * y;
				printf("O produto eh %.2f", resultado);
				break;
			case '/':
				printf("Digite dois numeros: ");
				scanf("%f %f", &x, &y);
				
				resultado = x / y;
				printf("A divisao eh %.2f", resultado);
				break;
			default:
				printf("Opcao invalida");
		}
		
		printf("\nDeseja fazer um novo calculo?\n1 - Sim\n2 - Nao ");
		scanf("%d", &opcao);
	} while (opcao != 2);
	printf("Ate logo");
}
