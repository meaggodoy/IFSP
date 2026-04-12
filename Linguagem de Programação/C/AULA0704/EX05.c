#include <stdio.h>

int main() {
	float compra, final;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &compra);
	
	if (compra >= 100) {
		final = 0.9 * compra;
	} else {
		final = compra;
	}
	
	printf("O valor final eh %.2f", final);
}
