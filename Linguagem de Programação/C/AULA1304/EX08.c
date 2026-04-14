#include <stdio.h>

int main() {
	int i, maior, num;
	
	for (i = 0; i < 5; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (i == 0) {
			maior = num;
		}
		
		if (num > maior) {
			maior = num;
		}
	}
	
	printf("O maior numero foi: %d", maior);
}
