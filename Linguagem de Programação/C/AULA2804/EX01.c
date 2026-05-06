#include <stdio.h>

int main() {
	float nota_solo[5], soma, media;
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Digite sua nota para o solo: ");
		scanf("%f", &nota_solo[i]);
	}
	
	for (i = 0; i < 5; i++)  {
		soma += nota_solo[i];
	}
	
	media = soma / 5.0;
	printf("A media de nota dos solos eh: %.2f", media);
}
