#include <stdio.h>

int maior(int a, int b, int c) {
    int maior;
    
    if (a > b && a > c) {
        maior = a;
        return maior;
    } else if (b > a && b > c) {
        maior = b;
        return maior;
    } else {
        maior = c;
        return maior;
    }
}

int main()
{
    int x, y, z;
    
    printf("Digite tres valores: ");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("O maior valor dos 3 numeros foi %d", maior(x, y, z));

    return 0;
}
