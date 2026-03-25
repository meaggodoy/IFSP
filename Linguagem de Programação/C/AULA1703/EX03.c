//3) Ler duas notas, calcular a média e informar: “aprovado” se média = 6, senão “reprovado”.

#include <stdio.h>

int main() {
	float nota, media = 0, soma = 0, cont = 0;
	
	do {
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		
		if (nota > 0) {
			soma += nota;
			cont++;
		} else {
			break;
		}
	} while (nota >= 0);
	
	media = soma / cont;
	
	printf("A media eh: %f", media);
}
