#include <stdio.h>

float valores(float n) {
	float soma = 0, q, media;
	
	do {
		printf("Digite um numero: ");
		scanf("%f", &n);
		
		if(n >= 0) {
			soma += n;
			q++;
		}
	} while (n >= 0);
	
	media = soma / q;
	return media;
}

int main() {
	float num;
	
	printf("A media dos valores digitados eh %.2f", valores(num));
}
