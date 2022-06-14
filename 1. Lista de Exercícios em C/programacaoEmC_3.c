#include <stdio.h>
main()
{
	float precoPao;
	int qtdPaes;
	printf("Digite o preço do pão:\n");
	scanf("%f", &precoPao);
	printf("Digite a quantidade de pães: \n");
	scanf("%d", &qtdPaes);
	printf("O valor da compra é de: R$ %.2f", precoPao * qtdPaes);
	return 0;	
}