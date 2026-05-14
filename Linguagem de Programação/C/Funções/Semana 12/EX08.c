#include <stdio.h>

int vetorMenor(int *v) {
	int i, menor;
	
	for (i = 0; i < 50; i++) {
		if (i == 0) {
			menor = v[i];
		}
		
		if (v[i] < menor) {
			menor = v[i];
		}
	}
	
	return menor;
}

int vetorMaior(int *v) {
	int i, maior;
	
	for (i = 0; i < 50; i++) {
		if (i == 0) {
			maior = v[i];
		}
		
		if (v[i] > maior) {
			maior = v[i];
		}
	}
	
	return maior;
}

void lerVetor(int *v) {
	int i;
	
	for (i = 0; i < 50; i++) {
		printf("Digite um numero: ");
		scanf("%d", &v[i]);
	}
}

int main() {
	int vetor[50];
	lerVetor(vetor);
	
	printf("O maior valor digitado foi %d\n", vetorMaior(vetor));
	printf("O menor valor digitado foi %d", vetorMenor(vetor));
}
