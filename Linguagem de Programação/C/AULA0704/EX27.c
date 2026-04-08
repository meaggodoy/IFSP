#include <stdio.h>

int main() {
	int num, i, teste = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("Nao eh primo");
			break;
		} else {
			teste++;
		}
	}
	
	if (teste == (num - 2)) {
		printf("Eh primo");
	}
}
