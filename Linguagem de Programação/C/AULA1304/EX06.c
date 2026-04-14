#include <stdio.h>

int main() {
	int menu;
	
	do {
		printf("1 - Mostrar mensagem\n2 - Mostrar outra mensagem\n0 - Sair\nEscolha uma opcao: ");
		scanf("%d", &menu);
	} while (menu != 0);
}
