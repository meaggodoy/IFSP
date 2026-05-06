#include <stdio.h>

int main() {
	float notas[8], soma, media;
	int i, acima_media = 0;
	
	for (i = 0; i < 8; i++) {
		printf("Digite uma nota: ");
		scanf("%f", &notas[i]);
	}
	
	for (i = 0; i < 8; i++) {
		soma += notas[i];
	}
	
	media = soma / 8.0;
	printf("Media: %.2f\n", media);
	
	for (i = 0; i < 8; i++) {
		if (notas[i] > media) {
			acima_media++;
		}
	}
	
	printf("Foram %d notas acima da media", acima_media);
}
