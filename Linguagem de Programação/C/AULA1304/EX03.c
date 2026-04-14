#include <stdio.h>

int main() {
	int num, tabuada, i;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for (i = 1; i <= 10; i++) {
		tabuada = num * i;
		
		printf("%d x %d = %d\n", num, i, tabuada);
	}
}
