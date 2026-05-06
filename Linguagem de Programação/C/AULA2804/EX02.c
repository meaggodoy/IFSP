#include <stdio.h>

int main() {
	int incendio[7], i;
	
	for (i = 0; i < 7; i++) {
		printf("Digite a quantidade de focos de incendios do dia %d: ", i + 1);
		scanf("%d", &incendio[i]);
	}
	
	for (i = 6; i >= 0; i--) {
		printf("Os focos do dia %d foi de %d\n", i + 1, incendio[i]);
	}
}

