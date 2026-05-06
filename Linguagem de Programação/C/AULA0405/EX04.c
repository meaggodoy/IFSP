#include <stdio.h>

int main() {
	int num[10], i, positivo, negativo, zero;
	positivo = negativo = zero = 0;

	for (i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num[i]);
		
		if (num[i] > 0) {
			positivo++;
		} else if (num[i] < 0) {
			negativo++;
		} else {
			zero++;
		}
	}
	
	printf("Positivos: %d\nNegativos: %d\nZeros: %d", positivo, negativo, zero);
}
