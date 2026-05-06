#include <stdio.h>

int main() {
	int num[8], i;
	
	for (i = 0; i < 8; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i < 8; i++) {
		printf("%d - Numero %d\n", i + 1, num[i]);
	}
}
