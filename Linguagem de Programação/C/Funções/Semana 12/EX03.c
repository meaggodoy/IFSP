#include <stdio.h>

float media(float a, float b, float c) {
    float media = (a + b + c) / 3;
    
    return media;
}

int main()
{
    float num1, num2, num3;
    
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite um numero: ");
    scanf("%f", &num2);
    printf("Digite um numero: ");
    scanf("%f", &num3);
    
    printf("A media eh %.2f", media(num1, num2, num3));
    
    return 0;
}
