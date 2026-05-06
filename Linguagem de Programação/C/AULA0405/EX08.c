#include <stdio.h>

int main() {
	float precos[5];
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite o preco: ");
		scanf("%f", &precos[i]);
	}
	
	printf("Original\n");
	for (i = 0; i < 5; i++) {
		printf("Preco %d: %.2f\n", i + 1, precos[i]);
	}
	
	printf("Desconto\n");
	for (i = 0; i < 5; i++) {
		precos[i] = 0.9 * precos[i];
		printf("Valor %d com desconto: %.2f\n", i + 1, precos[i]);
	}
}
