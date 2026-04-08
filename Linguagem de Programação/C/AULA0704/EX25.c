#include <stdio.h>

int main() {
	int opcao;
	float x, y, resultado;
	
	printf("Escolha um item do menu:\n");
	printf("1 - Somar | 2 - Subtrair | 3 - Multiplicar | 4 - Dividir\n");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Soma: Digite os dois numeros: ");
			scanf("%f %f", &x, &y);
			
			resultado = x + y;
			printf("A soma eh %.2f", resultado);
			break;
		case 2:
			printf("Subtracao: Digite os dois numeros: ");
			scanf("%f %f", &x, &y);
			
			resultado = x - y;
			printf("A subtracao eh %.2f", resultado);
			break;
		case 3:
			printf("Multiplicacao: Digite os dois numeros: ");
			scanf("%f %f", &x, &y);
			
			resultado = x * y;
			printf("O produto eh %.2f", resultado);
			break;
		case 4:
			printf("Divisao: Digite os dois numeros: ");
			scanf("%f %f", &x, &y);
			
			resultado = x / y;
			printf("A divisao eh %.2f", resultado);
			break;
	}
}
