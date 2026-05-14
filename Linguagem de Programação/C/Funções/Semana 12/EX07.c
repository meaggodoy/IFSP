#include <stdio.h>

char* mensagemIMC(float x) {
	if (x >= 40) {
		return "Obesidade Grau III";
	} else if (x >= 35) {
		return "Obesidade Grau II";
	} else if (x >= 30) {
		return "Obesidade Grau I";
	} else if (x >= 25) {
		return "Pre Obesidade";
	} else if (x >= 18.5) {
		return "Peso Normal";
	} else {
		return "Baixo peso";
	}
}

int main() {
	float peso, altura, imc;
	
	printf("Digite seu peso (kg) e sua altura (m): ");
	scanf("%f %f", &peso, &altura);
	
	imc = peso / (altura * altura);
	
	char* texto;
	texto = mensagemIMC(imc);
	printf("%s", texto);
}
