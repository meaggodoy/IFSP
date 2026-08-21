#include <stdio.h>

int somarInteiro(int a, int b, int c) {
    int r = 0, i;
    
    if (b < c) {
        for (i = (b + 1); i < c; i++) {
            if (i%a == 0) {
                r += i;
            }
        }
        r = r + b + c;
        return r;
    } else if (b > c) {
        for (i = (c + 1); i < b; i++) {
            if (i%a == 0) {
                r += i;
            }
        }
        r = r + b + c;
        return r;
    } else {
        return (r + b);
    }
}

int main() {
    int a, b, c, resultado;
    
    do {
        printf("Digite A: ");
        scanf("%d", &a); 
    } while (a < 1);
    
    printf("Digite B: ");
    scanf("%d", &b);
    printf("Digite C: ");
    scanf("%d", &c);
    
    resultado = somarInteiro(a, b, c);
    printf("Resultado: %d", resultado);

    return 0;
}
