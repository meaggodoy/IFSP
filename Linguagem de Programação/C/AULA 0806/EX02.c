#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *arq;
	char frase1[50], frase2[50];
	int tamanho, i;
	
	//w(write)
	arq = fopen("EX02_texto.txt", "w");
	
	printf("Digite a primeira frase a ser digitada no arquivo: ");
	gets(frase1);
	
	tamanho = strlen(frase1);
	
	for (i = 0; i < tamanho; i++) {
		fputc(frase1[i], arq);
	}
	
	printf("Digite a segunda frase a ser digitada no arquivo: ");
	gets(frase2);
	
	tamanho = strlen(frase2);
	
	for (i = 0; i < tamanho; i++) {
		fputc(frase2[i], arq);
	}
	
	
	fclose(arq);
	
	return 0;
}
