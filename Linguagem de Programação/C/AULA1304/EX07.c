#include <stdio.h>

int main() {
	int i, par = 0, num;
	
	for (i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num % 2 == 0) {
			par++;
		}
	}
	
	printf("Numeros pares: %d", par);
}
