#include <stdio.h>

int main() {
	float C, F;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &C);
	
	F = (C * 1.8) + 32;
	
	printf("A temperatura em Fahrenheit eh %.2f", F);
	
	return 0;
}
