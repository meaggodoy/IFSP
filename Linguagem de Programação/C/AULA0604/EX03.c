#include <stdio.h>

int main()
{
    float compra;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &compra);
    
    if (compra > 150) {
        compra = 0.9 * compra;
        
        printf("O valor final eh %.2f", compra);
    } else {
        printf("O valor final eh %.2f", compra);
    }

    return 0;
}
