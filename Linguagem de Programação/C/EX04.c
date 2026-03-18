//4) Ler o preço de um produto e a quantidade comprada. Calcular o total. Se o total for maior ou igual a
//100, aplicar 10% de desconto. Mostrar total e valor final.

#include <stdio.h>

int main() {
	int qntd;
	float prod, total = 0, final;
	
	printf("Digite o preco do produto e quantos itens dele foram comprados: ");
	scanf("%f %d", &prod, &qntd);
	
	total = prod * qntd;
	
	if (total >= 100) {
		final = 0.9 * total;
	} else {
		final = total;
	}
	
	printf("O valor final do produto eh de %f com pagamento de %f", total, final);
}
