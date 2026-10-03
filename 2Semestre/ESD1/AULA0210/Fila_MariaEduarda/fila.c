#include <stdio.h>
#include "fila.h"

Fila f;

void inicializar(){
	//atribui -1 ao membro final da fila
	f.fim = -1;
}

int verificarVazia(){
	//verifica se o membro final da fila eh igual a -1
	if (f.fim == -1)
		return 1;
	else return 0;
}

int verificarCheia() {
	//verifica se o membro final da fila eh igual a TAM_MAX-1
	if (f.fim == TAM_MAX - 1)
		return 1;
	else return 0;
}

void inserir(int numero){
	//verificar se a fila nao estah cheia
	if (!verificarCheia()){
 		//atualiza o fim da fila
		f.fim++;
		//insere o numero no vetor no final
		f.vetor[f.fim] = numero;
	} else
		//se estiver cheia, informa o usu�rio
		printf("A fila estah cheia, nao eh possivel inserir novos numeros.");
}

void imprimir(){
	//verificar se a fila n�o est� vazia
	if (!verificarVazia()) {
        //define uma vari�vel auxiliar
		int aux;
 		//percorre o vetor do in�cio ate o fim da fila
		for (int i = 0; i <= f.fim; i++)
			//imprimir na tela o elemento na posi��o i
			printf("%d\t", f.vetor[i]);
	} else
		//se estiver vazia, informa o usu�rio
		printf("A fila estah vazia, nao eh possivel imprimir a fila.");
}

int remover() {
	//verificar se a fila n�o est� vazia
	if (!verificarVazia()) {
        //define duas vari�veis aux e i
		int aux, i;
		//aux ir� guardar o elemento do in�cio da fila
		aux = f.vetor[0];
		//translada os elementos do inicio ao final -1
		for (i = 0; i < TAM_MAX; i++)
		    //a posi��o i receber o valor da posi��o i+1
			f.vetor[i] = f.vetor[i + 1];
		//atualiza o fim da fila
		f.fim--;
     	//retorna n�mero removido
		return aux;
	} else
		//se estiver vazia, informa o usu�rio
		printf("A fila estah vazia, nao eh possivel remover numeros.");
}


//Funcoes para testes automatizados
void emitirResultado(int resultado) {
	if(resultado) 
		printf("\nGREEN: Passou!");
	else printf("\nRED: Nao passou!");
}

void testar1_VaziaFila(){
	printf("\nTeste 1: Este teste irah verificar a fila vazia");
	inicializar();
	if(verificarVazia()) {
		emitirResultado(1);
	} else emitirResultado(0);
}

void testar2_InserirFila(int quant){
	int numeros[quant], i;
	printf("\nTeste 2: Este teste irah inserir %d elementos na fila", quant);
	if (quant > TAM_MAX)
		printf(", e terah que dizer que a fila estah cheia, inserindo somente os %d primeiros", TAM_MAX);
	
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
		
	inicializar();
	for(i = 0; i < quant; i++)
		inserir(numeros[i]);
		
	for(i = 0; i < quant && i < TAM_MAX; i++)
		if(f.vetor[i] != numeros[i]) {
			emitirResultado(0);
			return;
		}
	emitirResultado(1);
}

void testar3_RemoverFila(){
	int removido = 0;
	printf("\nTeste 3: Este teste irah tentar remover de uma fila vazia");
	inicializar();
	removido = remover();
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}

void testar4_RemoverFila(int quant){
	int removido = 0, i, numeros[quant];
	printf("\nTeste 4: Este teste irah inserir %d elemento na fila e remove-lo, deixando a fila vazia", quant);
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
	
	inicializar();
	for(i = 0; i < quant; i++) {
		inserir(numeros[i]);
	}
	
	for(i = 0; i < quant && i < TAM_MAX; i++) {
		removido = remover();
		if(removido != numeros[i]) {
			emitirResultado(0);
			return;
		}
	}
	//verifica se a fila ficou vazia
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}

