#include <stdio.h>
#define TAM_MAX 10

typedef struct _disco {
    char cor[20];
	int diametro;
	float peso;
	struct _disco *prox;
} Disco;

typedef struct pilha {
	Disco *disco;
	int topo;
} Pilha;

Pilha p;

void push(Disco disco);
Disco pop();
void imprimir();
int verificarCheia();
int verificarVazia();
void inicializar();

void inicializar(){
	p.topo = -1;
}

int verificarVazia(){
	if(p.topo == -1)
		return 1;
	else return 0;
}

int verificarCheia(){
	if(p.topo == TAM_MAX - 1)
		return 1;
	else return 0;
}

void push(int x, Pilha *p){
	if(!verificarCheia()) {
		Disco *aux;
		aux = (Disco *) malloc (sizeof(Disco));
		aux.cor
		aux.diametro
		aux.peso
		aux.prox = p.topo;
		p.topo = aux;
		p.teste[p.topo] = disco;
	} else {
		printf("\nNao eh possivel inserir, pilha cheia.");
	}
}

struct pop(){
	if(!verificarVazia()) {
		int aux;
		aux = p.vetor[p.topo];
		p.topo--;
		return aux;
	} else {
		printf("\nA pilha estah vazia.");
		return 0;
	}
}

void imprimir(){
	if(!verificarVazia()) {
		int i;
		printf("\nOs elementos na pilha sao:");
		for(i = p.topo; i >= 0; i--)
			printf("\n%d", p.vetor[i]);
	} else {
		printf("\nA pilha esta vazia.");
	}
}

int main(int argc, char *argv[]) {
	int temp, opcao;
	inicializar();

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
				inicializar();
				break;
			case 2:
				printf("Digite um numero (teste): ");
				scanf("%d", &temp);
				push(temp);
				break;
			case 3:
				temp = pop();
				printf("Numero removido: %d", temp);
				break;
			case 4:
				imprimir();
				break;
			case 5:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 5);
}