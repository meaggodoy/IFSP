#include <stdio.h>

int main() {
	float area, raio, pi = 3.14159;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi * raio * raio;
	
	printf("%.2f", area);
	
	return 0;
}
