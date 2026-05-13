#include <stdio.h>

float baixa(float a, float b, float c) {
    float menor;
    
    if (a < b && a < c) {
        menor = a;
        return menor;
    } else if (b < a && b < c) {
        menor = b;
        return menor;
    } else {
        menor = c;
        return menor;
    }
}

float alta(float a, float b, float c) {
    float maior;
    
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

float media2(float a, float b, float c) {
    float media2, soma;
    
    if (a > b && a > c) {
        if (b > c) {
            soma = a + b;
        } else {
            soma = a + c;
        }
    } else if (b > a && b > c) {
        if (a > c) {
            soma = a + b;
        } else {
            soma = b + c;
        }
    } else {
        if (a > b) {
            soma = a + c;
        } else {
            soma = b + c;
        }
    }
    
    media2 = soma / 2;
    return media2;
}

float media3(float a, float b, float c) {
    float media3;
    
    media3 = (a + b + c) / 3;
    return media3;
}

int main()
{
    float nota1, nota2, nota3;
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    float maior_nota = alta(nota1, nota2, nota3);
    float menor_nota = baixa(nota1, nota2, nota3);
    
    float media_notas3;
    media_notas3 = media3(nota1, nota2, nota3);
    printf("A media das tres notas seria %.2f\n", media_notas3);
    
    float media_notas2;
    media_notas2 = media2(nota1, nota2, nota3);
    printf("A media das duas maiores notas seria %.2f\n", media_notas2);
    printf("A maior nota foi %.2f\n", maior_nota);
    printf("A menor nota foi %.2f", menor_nota);
    
    return 0;
}
