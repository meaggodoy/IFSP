#include <stdio.h>

float media(float n1, float n2, float n3) {
    float m;
    
    if (n1 > n2 && n1 > n3) {
        if (n2 > n3) {
            m = (n1 + n2)/ 2;
        } else {
            m = (n1 + n3)/ 2;
        }
    } else if (n2 > n1 && n2 > n3) {
        if (n1 > n3) {
            m = (n1 + n2)/ 2;
        } else {
            m = (n2 + n3)/ 2;
        }
    } else if (n3 > n1 && n3 > n2) {
        if (n1 > n2) {
            m = (n1 + n3)/ 2;
        } else {
            m = (n2 + n3)/ 2;
        }
    }
    
    return m;
}

int main() {
    float nota1, nota2, nota3, m;
    
    printf("Digite as notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    
    m = media(nota1, nota2, nota3);
    
    if (m < 40) {
        printf("Reprovado");
    } else if (m < 70 ) {
        printf("Exame final");
    } else {
        printf("Aprovado");
    }
}
