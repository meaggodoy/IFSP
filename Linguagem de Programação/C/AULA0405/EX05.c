#include <stdio.h>

int main() {
	int num[12], i, j, cont_par = 0;
	
	for (i = 0; i < 12; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num[i]);
		
		if (num[i] % 2 == 0) {
			cont_par++;
		}
	}
	
	int par[cont_par];
	
	for (i = 0; i < 12; i++) {
		if (num[i] % 2 == 0) {
			par[i] = num[i];
		} else {
			par[i] = 0;
		}
	}
	
	for (i = 0; i < 12; i++) {
		if (par[i] != 0) {
			printf("%d\n", par[i]);	
		}
	}
}
