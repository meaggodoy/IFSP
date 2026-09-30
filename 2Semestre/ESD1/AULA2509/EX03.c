#include <stdio.h>
#define TAM_MAX 10

typedef struct _disco {
    char cor[20];
	int diametro;
	float peso;
} Disco;

typedef struct pilha {
	Disco vetorDisco[TAM_MAX];
	int topo;
} Pilha;

Pilha p;
Disco disco;

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

void push(Disco disco){
    if (disco.diametro <= p.vetorDisco[p.topo].diametro){
        if(!verificarCheia()) {
    	    p.topo++;
    		p.vetorDisco[p.topo] = disco;
    	} else {
    		printf("\nNao eh possivel inserir, pilha cheia.");
    	}
    } else 
        printf("\nNao eh possivel adicionar um disco maior que o anterior.");
}

Disco pop(){
	if(!verificarVazia()) {
		Disco aux;
        aux = p.vetorDisco[p.topo];
        p.topo--;
        return aux;
	} else {
	    Disco vazio = {"", 0, 0.0};
		printf("\nA pilha estah vazia.");
		return vazio;
	}
}

void imprimir(){
	if(!verificarVazia()) {
		int i;
        for(i = p.topo; i >= 0; i--) {
            printf("\nDisco %d", i + 1);
            printf("\nCor: %s", p.vetorDisco[i].cor);
            printf("\nDiametro: %d cm", p.vetorDisco[i].diametro);
            printf("\nPeso: %.2f", p.vetorDisco[i].peso);
        }
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
				printf("Digite a cor: ");
                scanf("%s", disco.cor);
                printf("Digite o diametro: ");
                scanf("%d", &disco.diametro);
                printf("Digite o peso: ");
                scanf("%f", &disco.peso);
				push(disco);
				break;
			case 3:
				disco = pop();
				if(disco.diametro != 0) {
				    printf("\nCor: %s", disco.cor);
                    printf("\nDiametro: %d cm", disco.diametro);
                    printf("\nPeso: %.2f", disco.peso);   
				}
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
