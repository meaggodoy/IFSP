#include <stdio.h>

int main()
{
    int menu, num, i, resultado = 0, caseMenu;
    float nota1, nota2, media = 0, calculadora, x, y;
    char operador;
    
    printf("Seja bem-vindo a nossa aplicacao: CalcMe.\nUm ambiente ha algumas operacoes basicas da matematica.\nFaca bom uso!");
    
    do {
        printf("\n===== MENU DE UTILIDADES =====");
        printf("\n1 - Calculadora\n2 - Media e situacao\n3 - Par ou impar e sinal\n4 - Tabuada\n5 - Soma ate zero (0)\n0 - Sair");
        printf("\nEscolha sua opcao: ");
        scanf("%d", &menu);
        
        switch (menu) {
            case 1:
                printf("Menu: Calculadora");
                do {
                	printf("\nMenu\n'+' Soma\n'-' Subtracao\n'*' Multiplicacao\n'/' Divisao\n'0' - Sair\nDigite um operador: ");
					scanf(" %c", &operador);
				
					switch (operador) {
						case '+':
							printf("Digite dois numeros: ");
							scanf("%f %f", &x, &y);
							
							calculadora = x + y;
							printf("A soma eh %.2f", calculadora);
							break;
						case '-':
							printf("Digite dois numeros: ");
							scanf("%f %f", &x, &y);
							
							calculadora = x - y;
							printf("A subtracao eh %.2f", calculadora);
							break;
						case '*':
							printf("Digite dois numeros: ");
							scanf("%f %f", &x, &y);
							
							calculadora = x * y;
							printf("O produto eh %.2f", calculadora);
							break;
						case '/':
							printf("Digite dois numeros: ");
							scanf("%f %f", &x, &y);
							
							calculadora = x / y;
							printf("A divisao eh %.2f", calculadora);
							break;
						case '0':
							printf("Saindo..");
							break;
						default:
							printf("Opcao invalida");
					}
				} while (operador != '0');
				
                break;
            case 2:
                printf("Menu: Media e situacao");
                do {
                    printf("\nNessa opcao voce pode inserir duas notas que lhe sera retornado a media entre elas e a situacao (aprovado ou reprovado).");
                    printf("\nAprovado: nota maior ou equivalente a 6 | Reprovado: nota inferior a 6\n");
                    
                    do {
                        printf("Digite a primeira nota: ");
                        scanf("%f", &nota1);
                        
                        if (nota1 < 0 || nota1 > 10) {
                            printf("Nota invalida, digite novamente.\n");
                        }
                    } while (nota1 < 0 || nota1 > 10);
                    
                    do {
                        printf("Digite a segunda nota: ");
                        scanf("%f", &nota2);
                        
                        if (nota2 < 0 || nota2 > 10) {
                            printf("Nota invalida, digite novamente.\n");
                        }
                    } while (nota2 < 0 || nota2 > 10);
                    
                    media = (nota1 + nota2) / 2;
                    printf("A media eh: %.2f", media);
                    
                    if (media >= 6) {
                        printf("\nSituacao: Aprovado");
                    } else {
                        printf("\nSituacao: Reprovado");
                    }
                    
                    printf("\nDeseja validar uma nova media?\n1 - Sim\n2 - Nao ");
					scanf("%d", &caseMenu);
					
					if (caseMenu != 2 && caseMenu != 1) {
						printf("Opcao invalida, digite novamente.");
					} else if (caseMenu == 2) {
						printf("Saindo..");
					}
                } while(caseMenu != 2);
                
                break;
            case 3:
                printf("Menu: Par ou Impar e sinal\n");
                
                do {
                	printf("Nessa opcao voce pode inserir o numero inteiro que lhe sera retornado se ele eh par ou impar e positivo ou negativo.\n");
                
	                printf("Digite um numero: ");
	                scanf("%d", &num);
	                
	                if (num > 0) {
	                	if (num % 2 == 0) {
	                		printf("Seu numero eh PAR e POSITIVO.");
						} else {
							printf("Seu numero eh IMPAR e POSITIVO.");
						}
					} else if (num < 0) {
						if (num % 2 == 0) {
	                		printf("Seu numero eh PAR e NEGATIVO.");
						} else {
							printf("Seu numero eh IMPAR e NEGATIVO.");
						}
					} else {
						printf("O numero eh ZERO.");
					}
					
					printf("\nDeseja validar um novo numero?\n1 - Sim\n2 - Nao ");
					scanf("%d", &caseMenu);
					
					if (caseMenu != 2 && caseMenu != 1) {
						printf("Opcao invalida, digite novamente.");
					} else if (caseMenu == 2) {
						printf("Saindo..");
					}
				} while (caseMenu != 2);
                
                break;
            case 4:
                printf("Menu: Tabuada");
                
                do {
                	printf("\nDigite um numero: ");
	                scanf("%d", &num);
	                
	                for (i = 1; i <= 10; i++) {
	                	resultado  = num * i;
	                	printf("%d x %d = %d\n", num, i, resultado);
					}
					
					printf("\nDeseja testar um novo numero?\n1 - Sim\n2 - Nao ");
					scanf("%d", &caseMenu);
					
					if (caseMenu != 2 && caseMenu != 1) {
						printf("Opcao invalida, digite novamente.");
					} else if (caseMenu == 2) {
						printf("Saindo..");
					}
				} while (caseMenu != 2);
                
                break;
            case 5:
                printf("Menu: Soma ate zero.\n");
                
                do {
	                do {
	                	printf("Digite um numero: ");
	                	scanf("%d", &num);
	                	
	                	if (num != 0) {
	                		resultado += num;
						}
					} while (num != 0);
					
					printf("A soma final eh %d", resultado);
					printf("\nDeseja somar novos numeros?\n1 - Sim\n2 - Nao ");
					scanf("%d", &caseMenu);
					
					if (caseMenu != 2 && caseMenu != 1) {
						printf("Opcao invalida, digite novamente.");
					} else if (caseMenu == 2) {
						printf("Saindo..");
					}
				} while (caseMenu != 2);
				
                break;
            case 0:
                printf("Agradecemos por ter usado nossa aplicacao! Nos vemos em breve.");
                break;
            default:
                printf("Opcao invalida. Digite novamente.");
        }
    } while (menu != 0);
    
    return 0;
}
