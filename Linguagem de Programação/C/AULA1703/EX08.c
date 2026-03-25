//8) Ler 8 idades e informar quantas são maiores ou iguais a 18.

#include <stdio.h>

int main() {
	int i, maior = 0, idade;
	
	for (i = 0; i < 8; i++) {
		printf("Digite uma idade: ");
		scanf("%d", &idade);
		
		if (idade >= 18) {
			maior++;
		}
	}
	
	printf("A quantidade de pessoas maiores de 18 sao: %d", maior);
}
