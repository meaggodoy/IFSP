#include <stdio.h>

int main()
{
    char estado;
    
    printf("Digite uma letra: ");
    scanf("%c", &estado);
    
    switch (estado) {
        case 's':
            printf("Solteiro");
            break;
        case 'c':
            printf("Casado");
            break;
        case 'v':
            printf("Viuvo");
            break;
        case 'd':
            printf("Divorciado");
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}
