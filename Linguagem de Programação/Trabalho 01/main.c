#include <stdio.h>

int perguntarRepetir() {
    char resposta;
    
    do {
	    printf("------------------------------------");
        printf("\nDeseja realizar outra operacao? (S/N): ");
	    scanf(" %c", &resposta);
	    
	    if (resposta == 'S') {
	        return 1; 
	    } else if (resposta == 'N') {
	        return 0;
	    } else {
	    	printf("[ERRO] Opcao invalida. Digite apenas S ou N.\n");
		}
	} while (resposta != 'S' || resposta != 'N');
}

int main() {
	int menu, funcaoPergunta = 1, num, i, num_soma, soma;
	char operador;
    float x, y, calculadora, nota1, nota2, media, num_tabuada, tabuada;
    
    printf("Aluna: Maria Eduarda Antunes Godoy | 1 periodo de ADS\n");
    printf("------------------------------------");
    printf("\nCalcMe");
    printf("\nEste sistema foi desenvolvido para\nrealizar operacoes matematicas e\noutros recursos de forma simples.\n");
					
	do {
		printf("\n===== MENU DE UTILIDADES =====");
        printf("\n[1] Calculadora \n[2] Media e Situacao \n[3] Par ou Impar e Sinal \n[4] Tabuada \n[5] Soma ate Zero \n[0] Sair");
        printf("\nEscolha sua opcao: ");
        scanf("%d", &menu);
        
        switch (menu) {
        	case 1:
        		printf("\n===== CALCULADORA =====");
                do {
                	printf("\nOperacoes disponiveis:\n[+] Soma \n[-] Subtracao \n[*] Multiplicacao \n[/] Divisao \n[0] Voltar \nDigite a operacao desejada: ");
					scanf(" %c", &operador);
				
					switch (operador) {
						case '+':
							printf("\nDigite o primeiro numero: ");
                            scanf("%f", &x);
                            printf("Digite o segundo numero: ");
                            scanf("%f", &y);
							
							calculadora = x + y;
							printf("\n[RESULTADO]\n%.2f + %.2f = %.2f\n", x, y, calculadora);
							break;
						case '-':
							printf("\nDigite o primeiro numero: ");
                            scanf("%f", &x);
                            printf("Digite o segundo numero: ");
                            scanf("%f", &y);
							
							calculadora = x - y;
							printf("\n[RESULTADO]\n%.2f - %.2f = %.2f\n", x, y, calculadora);
							break;
						case '*':
							printf("\nDigite o primeiro numero: ");
                            scanf("%f", &x);
                            printf("Digite o segundo numero: ");
                            scanf("%f", &y);
							
							calculadora = x * y;
							printf("\n[RESULTADO]\n%.2f x %.2f = %.2f\n", x, y, calculadora);
							break;
						case '/':
							printf("\nDigite o primeiro numero: ");
                            scanf("%f", &x);
                            printf("Digite o segundo numero: ");
                            scanf("%f", &y);
							
							if (y == 0) {
								printf("\n[ERRO]\nNao eh possivel dividir por zero.");
							} else {
								calculadora = x / y;
								printf("\n[RESULTADO]\n%.2f / %.2f = %.2f\n", x, y, calculadora);	
							}
							break;
						case '0':
							printf("\nVoltando ao menu principal...");
							break;
						default:
							printf("\n[ERRO] Operacao invalida.");
							operador = 'A';
					}
					
					if (operador != '0' && operador != 'A') {
						funcaoPergunta = perguntarRepetir();	
					}
				} while (funcaoPergunta != 0 && operador != '0');
        		break;
        	case 2:
        		printf("\n===== MEDIA E SITUACAO =====");
        		printf("\nDigite notas entre 0 e 10.\n");

        		do {
                    do {
                        printf("Digite a primeira nota: ");
                        scanf("%f", &nota1);
                        
                        if (nota1 < 0 || nota1 > 10) {
                            printf("[ERRO] Nota invalida.\n");
                        }
                    } while (nota1 < 0 || nota1 > 10);
                    
                    do {
                        printf("Digite a segunda nota: ");
                        scanf("%f", &nota2);
                        
                        if (nota2 < 0 || nota2 > 10) {
                            printf("[ERRO] Nota invalida.\n");
                        }
                    } while (nota2 < 0 || nota2 > 10);
                    
                    media = (nota1 + nota2) / 2;
                    printf("\n[RESULTADO]\nMedia final: %.2f\n", media);
                    
                    if (media >= 6) {
                        printf("Situacao: APROVADO\n");
                    } else {
                        printf("Situacao: REPROVADO\n");
                    }
                    
                    funcaoPergunta = perguntarRepetir();	
                    
				} while (funcaoPergunta != 0);
        		break;
        	case 3:
        		printf("\n===== PAR OU IMPAR E SINAL =====");
                
                do {
	                printf("\nDigite um numero inteiro: ");
	                scanf("%d", &num);
	                
	                if (num > 0) {
	                	if (num % 2 == 0) {
	                		printf("Classificacao: PAR e POSITIVO\n");
						} else {
							printf("Classificacao: IMPAR e POSITIVO\n");
						}
					} else if (num < 0) {
						if (num % 2 == 0) {
	                		printf("Classificacao: PAR e NEGATIVO\n");
						} else {
							printf("Classificacao: IMPAR e NEGATIVO\n");
						}
					} else {
						printf("O numero eh ZERO.\n");
					}
					
					funcaoPergunta = perguntarRepetir();	
                    
				} while (funcaoPergunta != 0);
        		break;
        	case 4:
        		printf("\n===== TABUADA =====");
        		
        		do {
	                printf("\nDigite um numero: ");
	                scanf("%f", &num_tabuada);
	                
	                printf("\nTabuada do %.2f\n", num_tabuada);
	                for (i = 1; i <= 10; i++) {
	                	tabuada  = num_tabuada * i;
	                	printf("%.2f x %d = %.2f\n", num_tabuada, i, tabuada);
					}
					
					funcaoPergunta = perguntarRepetir();	
                    
				} while (funcaoPergunta != 0);
        		break;
        	case 5:
        		printf("\n===== SOMA ATE ZERO =====");
        		printf("\nDigite numeros para somar.");
                printf("\nDigite 0 para finalizar.\n");
                
                do {
                	soma = 0;
                	
	                do {
	                	printf("Digite um numero: ");
	                	scanf("%d", &num_soma);
	                	
	                	if (num_soma != 0) {
	                		soma += num_soma;
						}
					} while (num_soma != 0);
					
					printf("\n[RESULTADO]\nSoma total: %d\n", soma);
					
					funcaoPergunta = perguntarRepetir();
					
				} while (funcaoPergunta != 0);
        		break;
        	case 0:
        		printf("====================================\n");
                printf("PROGRAMA FINALIZADO\n");
                printf("====================================\n");
                printf("Obrigado por utilizar o sistema!");
        		break;
        	default:
        		printf("\n[ERRO] Opcao invalida.\n");
		}
	} while (menu != 0);
	
	return 0;
}
