#include <stdio.h>
#include <string.h>

int main() {
	char nome[50], nomeMaior[50];
	int idade, i, maiorIdade;
	
	for (i = 0; i < 5; i++) {
		printf("Digite o nome: ");
		scanf("%s", nome);
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		if (i == 0) {
			maiorIdade = idade;
			strcpy(nomeMaior, nome);
		}
		
		if (idade > maiorIdade) {
			maiorIdade = idade;
			strcpy(nomeMaior, nome);
		}
	}
	
	printf("%s %d", nomeMaior, maiorIdade);
}
