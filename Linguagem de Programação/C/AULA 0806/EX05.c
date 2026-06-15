#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *arq;
	char leitura[50], colar[50];
	
	arq = fopen("EX05_parte1.txt", "r");
	while(fgets(leitura, 50, arq) != NULL) {
		strcpy(colar, leitura);
	}
	fclose(arq);
	
	arq = fopen("EX05_parte2.txt", "w");
	fprintf(arq, "%s", colar);
	fclose(arq);
	
	return 0;
}
