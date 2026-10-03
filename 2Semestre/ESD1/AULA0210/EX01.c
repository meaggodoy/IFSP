#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 10

void inserir(Aluno aluno);
void inicializar();
int verificarVazia();
int verificarCheia();
void imprimir();
Aluno remover();
Aluno receberAluno(Aluno aluno);
void imprimirAluno(Aluno aluno);

typedef struct _Aluno {
    char nome[50];
    int turma;
    char prontuario[10];
} Aluno;

typedef struct fila {
	Aluno vetorAlunos[TAM_MAX];
	int fim;
} Fila;

Aluno aluno;
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

void inserir(Aluno aluno){
	if (!verificarCheia()){
		f.fim++;
		f.vetorAlunos[f.fim] = aluno;
	} else
		printf("A fila estah cheia, nao eh possivel inserir novos numeros.");
}

void imprimir(){
	if (!verificarVazia()) {
		for (int i = 0; i <= f.fim; i++)
            imprimirAluno(f.vetorAlunos[i]);
	} else
		printf("A fila estah vazia, nao eh possivel imprimir a fila.");
}

Aluno remover() {
	if (!verificarVazia()) {
		Aluno aux;
		aux = f.vetorAlunos[0];
		for (int i = 0; i < f.fim; i++)
			f.vetorAlunos[i] = f.vetorAlunos[i + 1];
		f.fim--;
		return aux;
	} else
		printf("A fila estah vazia, nao eh possivel remover numeros.");
}

Aluno receberAluno(Aluno aluno) {
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Digite o numero da turma dele: ");
    scanf("%d", &aluno.turma);
    printf("Digite o prontuario dele: ");
    scanf("%s", aluno.prontuario);

    return aluno;
}

void imprimirAluno(Aluno aluno) {
    printf("\n---");
    printf("\nAluno: %s", aluno.nome);
    printf("\nTurma: %d", aluno.turma);
    printf("\nProntuario: %s", aluno.prontuario);
}

int main(int argc, char *argv[]) {
	int temp;
	int opcao;
	inicializar();

	do {
		//exibir o menu
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Imprimir");
		printf("\n5. Sair");
		printf("\nDigite a opcao desejada: ");
		
		//ler a opcao desejada pelo usuario
		scanf("%d", &opcao);
		
		//processar a funcionalidade
		switch(opcao) {
			case 1:
				inicializar();
				break;
			case 2:
				aluno = receberAluno(aluno);
				inserir(aluno);
				break;
			case 3:
				temp = remover();
				printf("\nNumero removido: %d", temp);
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
