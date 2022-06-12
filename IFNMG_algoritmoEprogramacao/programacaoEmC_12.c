#include <stdio.h>
main()
{
	int nDigitado;
	printf("Digite um número:\n");
	scanf("%d", &nDigitado);
	printf("O antecessor é %d", nDigitado - 1);
	printf("\nO sucessor é %d", nDigitado + 1);
	return 0;
}
