#include <stdio.h>

int perguntarRepetir() {
    char resposta;
    
    do {
	    printf("\nDeseja realizar o processo novamente? (S/N): ");
	    scanf(" %c", &resposta);
	    
	    if (resposta == 'S') {
	        return 1; 
	    } else if (resposta == 'N') {
	        return 0;
	    } else {
	    	printf("Opcao invalida.");
		}
	} while (resposta != 'S' || resposta != 'N');
}

int main() {
	int menu, funcaoPergunta = 1, num, i, num_soma, soma;
	char operador;
    float x, y, calculadora, nota1, nota2, media, num_tabuada, tabuada;
					
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
							
							if (y == 0) {
								printf("Divisao por 0.");
							} else {
								calculadora = x / y;
								printf("A divisao eh %.2f", calculadora);	
							}
							break;
						case '0':
							printf("Saindo..");
							break;
						default:
							printf("Opcao invalida");
							operador = 'A';
					}
					
					if (operador != '0' && operador != 'A') {
						funcaoPergunta = perguntarRepetir();	
					}
				} while (funcaoPergunta != 0 && operador != '0');
        		break;
        	case 2:
        		printf("Menu: Media e situacao");
        		printf("\nNessa opcao voce pode inserir duas notas que lhe sera retornado a media entre elas e a situacao (aprovado ou reprovado).");
                printf("\nAprovado: nota maior ou equivalente a 6 | Reprovado: nota inferior a 6\n");
        		do {
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
                    
                    funcaoPergunta = perguntarRepetir();	
                    
				} while (funcaoPergunta != 0);
        		break;
        	case 3:
        		printf("Menu: Par ou Impar e sinal\n");
        		printf("Nessa opcao voce pode inserir o numero inteiro que lhe sera retornado se ele eh par ou impar e positivo ou negativo.\n");
                
                do {
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
					
					funcaoPergunta = perguntarRepetir();	
                    
				} while (funcaoPergunta != 0);
        		break;
        	case 4:
        		printf("Menu: Tabuada");
        		
        		do {
	                printf("\nDigite um numero: ");
	                scanf("%f", &num_tabuada);
	                
	                for (i = 1; i <= 10; i++) {
	                	tabuada  = num_tabuada * i;
	                	printf("%.2f x %d = %.2f\n", num_tabuada, i, tabuada);
					}
					
					funcaoPergunta = perguntarRepetir();	
                    
				} while (funcaoPergunta != 0);
        		break;
        	case 5:
        		printf("Menu: Soma ate zero.\n");
                
                do {
                	soma = 0;
                	
	                do {
	                	printf("Digite um numero: ");
	                	scanf("%d", &num_soma);
	                	
	                	if (num_soma != 0) {
	                		soma += num_soma;
						}
					} while (num_soma != 0);
					
					printf("A soma final eh %d", soma);
					
					funcaoPergunta = perguntarRepetir();
					
				} while (funcaoPergunta != 0);
        		break;
        	case 0:
        		printf("Saida");
        		break;
        	default:
        		printf("Opcao invalida.");
		}
	} while (menu != 0);
	
	return 0;
}
