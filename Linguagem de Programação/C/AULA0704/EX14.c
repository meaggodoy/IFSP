#include <stdio.h>

int main() {
	float num, media = 0, soma = 0;
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite o numero: ");
		scanf("%f", &num);
		
		soma += num;
	}
	
	media = soma / 5;
	
	printf("A media eh %.2f", media);
}
