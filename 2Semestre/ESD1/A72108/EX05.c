#include <stdio.h>

int exponencial (int n, int e) {
    int i, k = n;
    
    for (i = 1; i <= e; i++) {
        n = n * k;
    }
    
    return n/k;
}

int main()
{
    int num, expoente, r;
    
    printf("Digite o numero e o expoente: ");
    scanf("%d%d", &num, &expoente);
    
    r = exponencial(num, expoente);
    
    printf("Resultado: %d", r);

    return 0;
}
