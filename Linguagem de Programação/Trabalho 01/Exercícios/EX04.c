#include <stdio.h>

int main() {
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	switch (num) {
		case 1:
		case 7:
			printf("Fim de semana");
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("Dia util");
			break;
		default:
			printf("O numero nao corresponde a nenhum dia");
	}
}
