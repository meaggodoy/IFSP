typedef struct _Noh {
    int dado;
    struct _Noh *anterior;
} No;

typedef struct _Pilha {
    No *topo;
} Pilha;

Pilha p;

void inicializar();
int verificarVazia();
int verificarCheia();
void push(int dado);
void imprimir();
int pop();

//Funcoes para testes automatizados
void testar1_VaziaPilha();
void testar3_RemoverPilha();
void testar4_RemoverPilha(int quant);