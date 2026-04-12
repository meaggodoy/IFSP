#include <stdio.h>

int main() {
	int num, i;
	
	for (i = 0; i < 6; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num > 10) {
			printf("%d\n", num);
		}
	}
}
