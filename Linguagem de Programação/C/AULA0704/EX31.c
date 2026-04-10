#include <stdio.h>

int main() {
	int voto, candA, candB, branco;
	candA = candB = branco = 0;
	
	printf("Digite seu voto\n");
	do {
		printf("1 - Candidato A | 2 - Candidato B | 3 - Branco | 0 - Encerrar\n");
		scanf("%d", &voto);
		
		switch (voto) {
			case 1:
				candA++;
				break;
			case 2:
				candB++;
				break;
			case 3:
				branco++;
				break;
		}
	} while (voto != 0);
	
	printf("Candidato A: %d | Candidato B: %d | Branco: %d", candA, candB, branco);
}
