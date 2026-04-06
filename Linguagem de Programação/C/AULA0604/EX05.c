#include <stdio.h>

int main()
{
    int opcao;
    
    printf("1-Saldo | 2-Saque | 3-Deposito | 4-Sair\n");
    printf("Digite uma opcao: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("Saldo");
            break;
        case 2:
            printf("Saque");
            break;
        case 3:
            printf("Deposito");
            break;
        case 4:
            printf("Sair");
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}
