//7) Ler 5 números e calcular a soma apenas dos números positivos.

#include <stdio.h>

int main() {
	int num, soma = 0, i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num > 0) {
			soma += num;
		}
	}
	
	printf("%d", soma);
}
