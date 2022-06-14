#include <stdio.h>
main()
{
	float valorSalario;
	printf("Digite o valor do salário:\n");
	scanf("%f", &valorSalario);
	printf("O valor do salário reajustado á de: R$ %.2f", valorSalario * 1.25);
	return 0;
}