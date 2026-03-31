#include <stdio.h>

int main()
{
    float n1, n2, media = 0;
    
    printf("Digite as duas notas: ");
    scanf("%f %f", &n1, &n2);
    
    media = (n1 + n2)/2;
    
    printf("%.2f\n", media);

    return 0;
}
