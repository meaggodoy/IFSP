#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializar() {
	p.topo = NULL;
}

int verificarVazia() {
	if (p.topo == NULL)
		return 1;
	return 0;
}

void push(int dado) {
    //aloca memoria para um novo noh da pilha
	No *novoNoh = (No *) malloc(sizeof(No));
    //se foi alocado memoria, adiciona o novoNo no topo da pilha
	if (novoNoh != NULL) {
        //guarda o elemento a inserir na pilha no membro dado do novoNo
		novoNoh->dado = dado;
        //o elemento anterior do novoNo serah o elemento que estah no topo
		novoNoh->anterior = p.topo;
        //Atualiza o topo da pilha
		p.topo = novoNoh;
	} else {
       	//senao informa o usuario que nao ha mais memoria    
		printf("\nNao eh possivel alocar, memoria acabou.");
	}
}

void imprimir() {
    //verificar se a pilha nao estah vazia
	if (!verificarVazia()) {
	    //Declara uma variavel ponteiro auxiliar para percorrer os nohs da pilha
		No *aux = NULL;
        //comeca a percorrer a partir do topo, enquanto nao chegar no fim, processa e vai para o noh anterior
		for (aux = p.topo; aux != NULL; aux = aux->anterior) {
 	        //imprimir o dado do noh apontado por aux
			printf("\n%d", aux->dado);
		}
	} else {
    	//se estiver vazia, informa o usuario
		printf("A pilha estah vazia.");
	}
}

int pop () {
     //verificar se a pilha não estah vazia
	 if (!verificarVazia()) {
        //cria variavel que vai apontar para o noh a ser removido
		No *aux = NULL;
        //cria variavel para guardar o dado do noh a ser removido
        int dado;
		//aux (meu remove - voltei pro aux) aponta para o noh do topo
		aux = p.topo;
        //dado ira guardar o elemento do topo da pilha
		dado = p.topo->dado;
        //atualizar o topo da pilha
		p.topo = p.topo->anterior;
        //libera a memoria ocupada pelo noh removido
		free(aux);
        //retorna o valor do noh removido
		return dado;
	 } else {
    	//se a fila estiver vazia, informa o usuario
		printf("A pilha estah vazia.");
	}
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
	int removido = 0, i, numeros[quant];
	printf("\nTeste 4: Este teste irah inserir %d elemento na pilha e remove-lo, deixando a pilha vazia", quant);
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
	
	inicializar();
	for(i = 0; i < quant; i++) {
		push(numeros[i]);
	}
	
	for(i = 0; i < quant; i++) {
		removido = pop();
		if(removido != numeros[quant-i-1]) {
			emitirResultado(0);
			return;
		}
	}
	//verifica se a pilha ficou vazia
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}
