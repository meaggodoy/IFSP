#include <stdio.h>

int main() {
	float nota1, nota2, nota3, media = 0, soma = 0;
	
	printf("Digite as tres notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	soma = nota1 + nota2 + nota3;
	media = soma / 3;
	
	printf("A media eh: %.2f", media);
	
	return 0;
}
