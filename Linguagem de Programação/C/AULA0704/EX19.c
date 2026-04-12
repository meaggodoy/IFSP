#include <stdio.h>

int main() {
	int num, par, impar, positivo, negativo, i;
	par = impar = positivo = negativo = 0;
	
	for (i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num % 2 == 0) {
			par++;
		} else {
			impar++;
		}
		
		if (num >= 0) {
			positivo++;
		} else {
			negativo++;
		}
	}
	
	printf("Positivos: %d | Negativos: %d\nPar: %d | Impar: %d", positivo, negativo, par, impar);
}
