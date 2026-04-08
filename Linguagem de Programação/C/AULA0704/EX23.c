#include <stdio.h>

int main()
{
    int feminino = 0, masculino = 0, i;
    char sexo;
    
    for (i = 0; i < 8; i++) {
        printf("Digite M para masculino ou F para feminino: ");
        scanf("%c", &sexo);
        
        if (sexo == 'M') {
            masculino++;
        } else if (sexo == 'F') {
            feminino++;
        } else {
            printf("Opcao invalida");
        }
    }
    
    printf("Masculino %d e feminino %d", masculino, feminino);

    return 0;
}
