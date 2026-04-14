#include <stdio.h>

int main() {
	int i, soma = 0, num;
	
	for (i = 0; i < 5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		soma += num;
	}
	
	printf("A soma eh %d", soma);
}
