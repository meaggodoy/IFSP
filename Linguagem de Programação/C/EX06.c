//6) Ler um número N e mostrar a tabuada de N de 1 até 10.

#include <stdio.h>

int main() {
	int num, mult, i;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for (i = 0; i < 10; i++) {
		mult = num * (i + 1);
		printf("%d x %d = %d\n", num, i + 1, mult);
	}
}
