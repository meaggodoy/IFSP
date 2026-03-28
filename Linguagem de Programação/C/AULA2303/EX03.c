#include <stdio.h>

int main() {
	float horas, valorHoras, salario;
	
	printf("Digite o valor de sua hora de trabalho: ");
	scanf("%f", &valorHoras);
	
	printf("Digite quantas horas voce trabahou no mes: ");
	scanf("%f", &horas);
	
	salario = horas * valorHoras;
	
	printf("Voce recebera: %.2f", salario);
	
	return 0;
}
