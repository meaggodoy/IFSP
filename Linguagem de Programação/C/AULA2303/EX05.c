#include <stdio.h>

int main() {
	int a, b, x;
	
	printf("Digite os valores de A e B: ");
	scanf("%d %d", &a, &b);
	
	x = a;
	a = b;
	b = x;
	
	printf("Agora A vale %d e B %d", a, b);
	
	return 0;
}
