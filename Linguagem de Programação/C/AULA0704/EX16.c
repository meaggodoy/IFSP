#include <stdio.h>

int main() {
	int num, soma = 0;
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num >= 0) {
			soma += num;
		}
	} while (num >= 0);
	
	printf("A soma eh %d", soma);
}
