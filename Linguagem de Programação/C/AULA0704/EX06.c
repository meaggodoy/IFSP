#include <stdio.h>

int main() {
	int codigo;
	
	printf("Digite o codigo: ");
	scanf("%d", &codigo);
	
	switch (codigo) {
		case 1:
			printf("Teclado");
			break;
		case 2:
			printf("Mouse");
			break;
		case 3:
			printf("Monitor");
			break;
		case 4:
			printf("Impressora");
			break;
		default:
			printf("Codigo invalido");
	}
}
