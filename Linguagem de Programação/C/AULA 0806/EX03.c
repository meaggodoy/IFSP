#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void salvarString(char s[]) {
	FILE *arq;
	arq = fopen("EX03_texto.txt", "a");
	
	if(arq != NULL) {
		fprintf(arq, "%s\n", s);
        fclose(arq);
	}
}

int main() {
	char strings[5][50] = {"Primeira linha de texto", "Segunda linha de texto", "Terceira linha de texto", "Quarta linha de texto", "Quinta linha de texto"};
    int i;
    
    for (i = 0; i < 5; i++) {
    	salvarString(strings[i]);
	}
	
	return 0;
}
