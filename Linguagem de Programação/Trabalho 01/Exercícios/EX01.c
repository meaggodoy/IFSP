#include <stdio.h>

int main() {
	int opcao;
	
	printf("Menu\n1 - Cadastrar\n2 - Consultar\n3 - Excluir\n0 - Sair\nEscolha uma opcao: ");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Cadastrar");
			break;
		case 2:
			printf("Consultar");
			break;
		case 3:
			printf("Excluir");
			break;
		case 0:
			printf("Sair");
			break;
		default:
			printf("Opcao invalida.");
	}
}
