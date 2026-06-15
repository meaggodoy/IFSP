#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *arq;
	char frase[10], senha[10] = "senha", c;
	int tamanho, i;
	
	arq = fopen("EX04_texto.txt", "w");
	
	printf("Digite a palavra chave: ");
	gets(frase);
	fprintf(arq, "%s", frase);
	
	fclose(arq);
	
	arq = fopen("EX04_texto.txt", "r");
	
	while(fgets(frase, 10, arq) != NULL) {
		if (strcmp(frase, senha) == 0) {
			printf("Senha correta");
		} else {
			printf("Senha incorreta");
		}
	}
	
	fclose(arq);
	
	return 0;
}
