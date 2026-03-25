#include <stdio.h>

int main() {
    int n1, n2;
    float media;
    
    printf("Digite as duas notas: ");
    scanf("%d %d", &n1, &n2);
    
    media = (float)(n1 + n2)/2;
    
    printf("%.2f", media);

    return 0;
}
