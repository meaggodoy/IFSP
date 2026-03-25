#include <stdio.h>

int main() {
    float a, b, soma, subtracao, multiplicacao;
    
    printf("Digite dois valores: ");
    scanf("%f %f", &a, &b);
    
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    
    printf("A soma é %.2f a subtracao %.2f e a multiplicacao %.2f", soma, subtracao, multiplicacao);

    return 0;
}
