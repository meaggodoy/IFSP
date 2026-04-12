#include <stdio.h>

int main() {
	float nota, media, soma = 0, maior = 0, menor = 0;
	int opcao, qntsNotas = 0;
	
	do {
		printf("Escreva a nota: ");
		scanf("%f", &nota);
		
		soma += nota;
		qntsNotas++;
		
		if (qntsNotas == 1) {
			maior = nota;
			menor = nota;
		}
		
		if (nota > maior) {
			maior = nota;
		}
		if (nota < menor) {
			menor = nota;
		}
		
		printf("Deseja digitar uma nova nota?\n1 - Sim | 2 - Nao ");
		scanf("%d", &opcao);
	} while (opcao == 1);
	
	media = soma / qntsNotas;
	
	printf("A media das notas eh %.2f\nA maior nota %.2f e a menor %.2f", media, maior, menor);
}
