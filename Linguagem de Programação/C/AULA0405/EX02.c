#include <stdio.h>

int main() {
	float notas[5], soma, media;
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite uma nota: ");
		scanf("%f", &notas[i]);
	}
	
	for (i = 0; i < 5; i++) {
		soma += notas[i];
	}
	
	media = soma / 5.0;
	printf("A soma das notas foi %.2f e a media %.2f", soma, media);
}
