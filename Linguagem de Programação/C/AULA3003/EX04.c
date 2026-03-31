#include <stdio.h>

int main()
{
    float b, h, area;
    
    printf("Digite a base e a altura: ");
    scanf("%f %f", &b, &h);
    
    area = b * h;
    
    printf("A area eh %.2f", area);
    
    return 0;
}
