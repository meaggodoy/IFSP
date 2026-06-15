#include <stdio.h>

int main() {
	//ponteiro para localização de arquivo
	FILE *arq;
	char c;
	
	//abrir arquivo - r(read)
	arq = fopen("EX01_texto.txt", "r");
	
	do {
		//leitura de caracter
		c = fgetc(arq);
		
		printf("%c", c);
	} while (c != EOF);
	
	//fechar arquivo
	fclose(arq);
	
	return 0;
}
