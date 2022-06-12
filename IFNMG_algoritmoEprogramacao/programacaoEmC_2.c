#include <stdio.h>
main()
{
	int qtdDias;
	float valorHoraTrabalhada = 50.70;
	printf("Digite a quantidade de dias trabalhados: \n");
	scanf("%d", &qtdDias);
	printf("O valor a ser pago é de: R$ %.2f", valorHoraTrabalhada * qtdDias);
	return 0;
}