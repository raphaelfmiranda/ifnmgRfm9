#include <stdio.h>
#include <math.h>
main()
{
	int nDigitado;
	printf("Digite um número maior que zero: ");
	scanf("%d", &nDigitado);
	printf("O número ao quadrado é: %.0f", pow(nDigitado, 2));
	return 0;
}