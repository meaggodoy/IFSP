#include <stdio.h>

int main()
  {
    int qntd;
  	float prod, total;
  	
  	printf("Digite o preco do produto e quantos itens dele foram comprados: ");
  	scanf("%f %d", &prod, &qntd);
  	
  	total = prod * qntd;
  	
  	printf("O valor final do produto eh de %.2f", total);
    
    return 0;
}
