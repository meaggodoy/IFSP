#include <stdio.h>

void salario() {
	float salario, soma = 0, media, maior = 0, salarioBase = 0, percentual;
	int q = 0;
	
	do {
		printf("Digite seu salario: ");
		scanf("%f", &salario);
		
		if (salario > 0) {
			soma += salario;
			q++;
		}
		
		if (salario > maior) {
			maior = salario;
		}
		
		if (salario > 850) {
			salarioBase++;
		}
	} while (salario > 0);
	
	media = soma / q;
	printf("A media salarial eh %.2f\n", media);
	
	printf("O maior salario eh de %.2f\n", maior);
	
	percentual = (salarioBase / q) * 100;
	printf("O percentual de pessoas com salario maior que 850 foi de %.2f%\n", percentual);
}

void filhos() {
	float media, filhos, soma = 0, q = 0;
	
	do {
		printf("Digite a quantidade de filhos: ");
		scanf("%f", &filhos);
		
		if (filhos > -1) {
			soma += filhos;
			q++;
		}
	} while (filhos > -1);
	
	media = soma / q;
	printf("A media de filhos eh %.2f\n", media);
}

int main() {
	salario();
	filhos();
}
