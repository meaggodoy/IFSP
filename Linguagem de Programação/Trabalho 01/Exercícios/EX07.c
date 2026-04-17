#include <stdio.h>

int main() {
	char turno;
	
	printf("Digite uma letra: ");
	scanf(" %c", &turno);
	
	switch (turno) {
		case 'M':
		case 'm':
			printf("Matutino - Manha");
			break;
		case 'V':
		case 'v':
			printf("Vespertino - Tarde");
			break;
		case 'N':
		case 'n':
			printf("Noturno - Noite");
			break;
		default:
			printf("Opcao invalida");
	}
}
