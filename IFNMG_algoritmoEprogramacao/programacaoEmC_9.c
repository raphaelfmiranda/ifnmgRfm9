#include <stdio.h>
#include <math.h>
main()
{
	float peso, altura;
	printf("Digite o seu peso e a sua altura:\n");
	scanf("%f%f", &peso, &altura);
	printf("O IMC e: %.2f", peso / pow(altura, 2));
	return 0;
}
