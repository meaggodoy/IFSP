#include <stdio.h>

int main() {
	int num, i, soma = 0;
	
	for (i = 0; i < 7; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num % 2 == 0) {
			soma += num;
		}
	}
	
	printf("A soma eh %d", soma);
}
