#include <stdio.h>

int main()
{
    float salario, reajustado;
    
    printf("Digite seu salario atual: ");
    scanf("%f", &salario);
    
    reajustado = 1.1 * salario;
    
    printf("Seu salario de %.2f sera rajustado para %.2f", salario, reajustado);
    
    return 0;
}
