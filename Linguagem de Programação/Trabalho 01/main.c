#include <stdio.h>

int main()
{
    int menu, num;
    float nota1, nota2, media = 0;
    
    printf("Seja bem-vindo a nossa aplicacao: CalcMe.\nUm ambiente ha algumas operacoes basicas da matematica.\nFaca bom uso!");
    
    do {
        printf("\n===== MENU DE UTILIDADES =====");
        printf("\n1 - Calculadora\n2 - Media e situacao\n3 - Par ou impar e sinal\n4 - Tabuada\n5 - Soma ate zero (0)\n0 - Sair");
        printf("\nEscolha sua opcao: ");
        scanf("%d", &menu);
        
        switch (menu) {
            case 1:
                printf("Calculadora");
                break;
            case 2:
                printf("Menu: Media e situacao");
                printf("\nNessa opcao voce pode inserir duas notas que lhe sera retornado a media entre elas e a situacao (aprovado ou reprovado).");
                printf("\nAprovado: nota maior ou equivalente a 6 | Reprovado: nota inferior a 6\n");
                
                printf("Digite a primeira nota: ");
                scanf("%f", &nota1);
                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);
                
                media = (nota1 + nota2) / 2;
                printf("A media eh: %.2f", media);
                
                if (media >= 6) {
                    printf("\nSituacao: Aprovado");
                } else {
                    printf("\nSituacao: Reprovado");
                }
                break;
            case 3:
                printf("Menu: Par ou Impar e sinal");
                printf("\nNessa opcao voce pode inserir o numero inteiro que lhe sera retornado se ele eh par ou impar e positivo ou negativo.\n");
                
                printf("Digite um numero: ");
                scanf("%d", &num);
                
                if (num % 2 == 0) {
                    if (num >)
                } else {
                    
                }
                break;
            case 4:
                printf("Tabuada");
                break;
            case 5:
                printf("Soma");
                break;
            case 0:
                printf("Agradecemos por ter usado nossa aplicacao! Nos vemos em breve.");
                break;
            default:
                printf("Opcao invalida. Digite novamente.\n");
        }
    } while (menu != 0);
    
    return 0;
}
