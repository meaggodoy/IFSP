#include <stdio.h>
#include "pilha.h"

pilha p;

void inicializar() {
	p.topo = -1;

	for (int i = 0; i < TAM_MAX; i++)
		p.vetor[i] = ' ';
}

int verificarVazia() {
	if (p.topo == -1)
		return 1;
	else return 0;
}

int verificarCheia() {
	if (p.topo == 4)
		return 1;
	else return 0;
}

void push(int dado) {
	//verificar se a pilha nao estah cheia
	if (p.topo != 4) {
		//atualiza o topo da pilha
		p.topo += 1;
        //insere o elemento no vetor na posicao topo
		p.vetor[p.topo] = dado;
	} else
		//se estiver cheia, informa o usuario
		printf("A pilha estah cheia.");
}

void imprimir() {
    //verificar se a pilha nao esta vazia
	if (p.topo != -1) {
		//define uma variavel auxiliar
		int aux;
        //percorre o vetor do topo ate a base
		for (int i = p.topo; i > -1; i--) {
			//imprimir o elemento na posicao
			printf("%d\n", p.vetor[i]);
		}
	} else
		//se estiver vazia, informa o usuario
		printf("A pilha estah vazia.");
}

int pop() {
    //verificar se a pilha nao estah vazia
	if (p.topo != -1) {
		//define variavel aux
		int aux;
        //aux ira guardar o elemento do topo da pilha
		aux = p.vetor[p.topo];
        //atualiza o topo da pilha
		p.topo -= 1;
        //retorna numero removido
		return aux;
	} else
		//se estiver vazia, informa o usuario
		printf("A pilha estah vazia.");
}


//Funcoes para testes automatizados
void emitirResultado(int resultado) {
	if(resultado) 
		printf("\nGREEN: Passou!");
	else printf("\nRED: Nao passou!");
}

void testar1_VaziaPilha(){
	printf("\nTeste 1: Este teste irah verificar a pilha vazia");
	inicializar();
	if(verificarVazia()) {
		emitirResultado(1);
	} else emitirResultado(0);
}

void testar2_InserirPilha(int quant){
	int numeros[quant], i, quantInserido;
	printf("\nTeste 2: Este teste irah inserir %d elementos na pilha", quant);
	if (quant > TAM_MAX)
		printf(", e terah que dizer que a pilha estah cheia, inserindo somente os %d primeiros", TAM_MAX);
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;

	inicializar();
	for(i = 0; i < quant; i++)
		push(numeros[i]);
	
	quantInserido = quant;
	if(quant > TAM_MAX)
		quantInserido = TAM_MAX;
	
	for(i = 0; i < quantInserido; i++)
		if(p.vetor[i] != numeros[i]) {
			emitirResultado(0);
			return;
		}
	emitirResultado(1);
}

void testar3_RemoverPilha(){
	int removido = 0;
	printf("\nTeste 3: Este teste irah tentar remover de uma pilha vazia");
	inicializar();
	removido = pop();
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}

void testar4_RemoverPilha(int quant){
	int removido = 0, i, numeros[quant], quantInserido;
	printf("\nTeste 4: Este teste irah inserir %d elemento na pilha e remove-lo, deixando a pilha vazia", quant);
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
	
	inicializar();
	for(i = 0; i < quant; i++) {
		push(numeros[i]);
	}
	
	quantInserido = quant;
	if(quant > TAM_MAX)
		quantInserido = TAM_MAX;
	
	for(i = 0; i < quantInserido; i++) {
		removido = pop();
		if(removido != numeros[quantInserido-i-1]) {
			emitirResultado(0);
			return;
		}
	}
	//verifica se a pilha ficou vazia
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}
