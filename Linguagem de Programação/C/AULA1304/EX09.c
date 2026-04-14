#include <stdio.h>

int main() {
	float nota, soma = 0, media = 0;
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		
		soma += nota;
	}
	media = soma / 5;
	
	printf("A media das notas eh %.2f", media);
}
