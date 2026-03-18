//2) Ler a idade de uma pessoa e informar se ela é menor de idade, maior de idade ou idosa (considere idosa a partir de 60 anos).

#include <stdio.h>

int main() {
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 60) {
		printf("Idoso");
	} else if (idade >= 18) {
		printf("Maior de idade");
	} else {
		printf("Menor de idade");
	}
}
