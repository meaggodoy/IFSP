//10) Criar um algoritmo que leia números até que o usuário digite 0. Ao final, mostrar a soma de todos os
//números digitados (sem incluir o 0).

#include <stdio.h>

int main() {
	int num, soma = 0;
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		soma += num;
	} while (num != 0);
	
	printf("Soma: %d", soma);
}
