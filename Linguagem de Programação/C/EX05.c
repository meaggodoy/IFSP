//5) Ler 10 números inteiros usando repetição e contar quantos deles são pares.

#include <stdio.h>

int main() {
	int num, par, i;
	
	for (i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num % 2 == 0) {
			par++;
		}
	}
	
	printf("%d sao numeros pares", par);
}
