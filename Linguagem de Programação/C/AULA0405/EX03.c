#include <stdio.h>

int main() {
	int num[7], i, maior, menor;
	
	for (i = 0; i < 7; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num[i]);
		
		if (i == 0) {
			maior = num[i];
			menor = num[i];
		}
		
		if (num[i] > maior) {
			maior = num[i];
		}
		if (num[i] < menor) {
			menor = num[i];
		}
	}
	
	printf("O maior numero digitado foi: %d\n", maior);
	printf("O menor numero digitado foi: %d", menor);
}
