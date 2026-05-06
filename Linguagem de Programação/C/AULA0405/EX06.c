#include <stdio.h>

int main() {
	int num[6], i, pesquisa, pesquisa_teste = 0;
	
	for(i = 0; i < 6; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num[i]);
	}
	
	printf("Digite um valor para pesquisa: ");
	scanf("%d", &pesquisa);
	
	for(i = 0; i < 6; i++) {
		if (pesquisa == num[i]) {
			pesquisa_teste++;
		}
	}
	
	if (pesquisa_teste != 0) {
		printf("O valor %d aparece", pesquisa);
	} else {
		printf("O valor %d NAO aparece", pesquisa);
	}
}
