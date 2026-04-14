#include <stdio.h>

int main() {
	int x, y;
	x = y = 0;
	
	printf("Contagem de 1 em 1:\n");
	while (x <= 10) {
		printf("%d\n", x);
		x++;
	}
	
	printf("Contagem de 2 em 2:\n");
	while (y <= 10) {
		printf("%d\n", y);
		y = y + 2;
	}
}
