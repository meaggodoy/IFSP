//9) Ler um valor inteiro N e calcular o fatorial de N (considere N = 0).

#include <stdio.h>

int main() {
	int num, i, fatorial = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for (i = num; i > 0; i--) {
		if (num > 1 && i > 1) {
			fatorial = fatorial * num * (i - 1);
			num = num - 2;
			i--;
		}	
	}
	
	printf("%d", fatorial);
}
