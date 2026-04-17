/*A versao mais legivel fica, claramente, sendo a ferramenta de IF/ELSE, pois esta, além de comprimir o tamanho do codigo, abrage as possibilidades da comparacao*/

#include <stdio.h>

int main()
{
    int n1, n2, media;
    
    printf("Digite as duas notas: ");
    scanf("%d %d", &n1, &n2);
    
    media = (n1 + n2)/2;
    
    printf("%d\n", media);
    
    /*USANDO SWITCH*/
    switch (media) {
    	case 0:
    	case 1:
    	case 2:
    	case 3:
    	case 4:
    	case 5:
    		printf("Reprovado");
    		break;
    	case 6:
    	case 7:
    	case 8:
    	case 9:
    	case 10:
    		printf("Aprovado");
    		break;
    	default:
    		printf("OK");		
	}
	
	/*USANDO IF/ELSE
	
	if (media >= 6) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }*/
    
    return 0;
}
