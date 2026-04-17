#include <stdio.h>

int main() {
	int menu, i;
	float x, y, resultado;
	
	do {
		printf("Menu\n1 - Tabuada\n2 - Par ou impar\n3 - Media de duas notas\n0 - Sair\nEscolha uma opcao: ");
		scanf("%d", &menu);
		
		switch (menu) {
			case 1: 
				printf("Digite um numero: ");
				scanf("%f", &x);
				
				for (i = 1; i <= 10; i++) {
					resultado = x * i;
					printf("%.2f x %d = %.2f\n", x, i, resultado);
				}
				
				break;
			case 2:
				printf("Digite um numero: ");
				scanf("%f", &x);
				
				if ((int)x % 2 == 0) {
					printf("Par\n");
				} else {
					printf("Impar\n");
				}
				
				break;
			case 3:
				printf("Digite as duas notas: ");
				scanf("%f %f", &x, &y);
				
				resultado = (x + y) / 2;
				printf("A media eh %.2f\n", resultado);
				
				break;
			case 0:
				printf("Ate logo");
				break;
			default:
				printf("Opcao invalida\n");
		}
	} while (menu != 0);
}
