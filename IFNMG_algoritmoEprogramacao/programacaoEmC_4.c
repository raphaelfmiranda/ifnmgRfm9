#include <stdio.h>
main()
{
	int qtdPao, qtdLeite, qtdSuco;
	float pao, leite, suco, totalPao, totalLeite, totalSuco, totalCompra;
	printf("Digite o preço do pão: \n")			;	scanf("%f", &pao);
	printf("Digite o preço do leite: \n")		;	scanf("%f", &leite);
	printf("Digite o preço do suco: \n")		;	scanf("%f", &suco);
	printf("Digite a quantidade de pão: \n")	; 	scanf("%d", &qtdPao);
	printf("Digite a quantidade de leite: \n")	; 	scanf("%d", &qtdLeite);
	printf("Digite a quantidade de suco: \n")	; 	scanf("%d", &qtdSuco);
	
	totalPao	=	pao * qtdPao;
	totalLeite	=	pao * qtdPao;
	totalSuco	=	pao * qtdPao;
	totalCompra	=	totalPao + totalLeite + totalSuco;

	printf("O valor total da compra é: R$ %.2f", totalCompra);
	
	return 0;
}