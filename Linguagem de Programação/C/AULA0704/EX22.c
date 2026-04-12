#include <stdio.h>

int main() {
	int num, i, intervalo = 0;
	
	for (i = 0; i < 5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num >= 10 && num <= 50) {
			intervalo++;
		}
	}
	
	printf("No intervalo foram %d numeros", intervalo);
}
