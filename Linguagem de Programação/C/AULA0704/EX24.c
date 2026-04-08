#include <stdio.h>

int main() {
	int idade, maior = 0, menor = 0, i;
	
	for (i = 0; i < 10; i++) {
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		if (idade >= 18) {
			maior++;
		} else {
			menor++;
		}
	}
	
	printf("Ha %d maiores de idade e %d menores de idade", maior, menor);
}
