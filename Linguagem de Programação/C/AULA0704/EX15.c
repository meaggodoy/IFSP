#include <stdio.h>

int main() {
	int num, soma = 0, inf = 0;
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num != 0) {
			soma += num;
			inf++;
		}
	} while (num != 0);
	
	printf("A soma eh %d de %d numeros", soma, inf);
}
