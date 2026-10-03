#include <stdio.h>
#define TAM_MAX 10

typedef struct pilha {
	int vetor[TAM_MAX];
	int topo;
} Pilha;

void push(int numero, Pilha *p);
int pop(Pilha *p);
void imprimir(Pilha *p);
int verificarCheia(Pilha *p);
int verificarVazia(Pilha *p);
void inicializar(Pilha *p);

void inicializar(Pilha *p){
	p->topo = -1;
}

int verificarVazia(Pilha *p){
	if(p->topo == -1)
		return 1;
	else return 0;
}

int verificarCheia(Pilha *p){
	if(p->topo == TAM_MAX - 1)
		return 1;
	else return 0;
}

void push(int numero, Pilha *p){
	if(!verificarCheia(p)) {
		p->topo++;
		p->vetor[p->topo] = numero;
	} else {
		printf("\nNao eh possivel inserir, pilha cheia.");
	}
}

int pop(Pilha *p){
	if(!verificarVazia(p)) {
		int aux;
		aux = p->vetor[p->topo];
		p->topo--;
		return aux;
	} else {
		printf("\nA pilha estah vazia.");
		return 0;
	}
}

void imprimir(Pilha *p){
	if(!verificarVazia(p)) {
		int i;
		printf("\nOs elementos na pilha sao:");
		for(i = p->topo; i >= 0; i--)
			printf("\n%d", p->vetor[i]);
	} else {
		printf("\nA pilha esta vazia.");
	}
}

int main(int argc, char *argv[]) {
    Pilha p;
    
	int temp, opcao;
	inicializar(&p);

	do {
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Imprimir");
		printf("\n5. Sair");
		printf("\nDigite a opcao desejada: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				inicializar(&p);
				break;
			case 2:
				printf("Digite um numero: ");
				scanf("%d", &temp);
				push(temp, &p);
				break;
			case 3:
				temp = pop(&p);
				printf("Numero removido: %d", temp);
				break;
			case 4:
				imprimir(&p);
				break;
			case 5:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
	} while(opcao != 5);
}