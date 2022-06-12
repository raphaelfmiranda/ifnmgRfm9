#include <stdio.h>
main()
{
	float base, altura;
	printf("Cálculo da área e do perímetro:\nDigite um valor para base:\nDigite um valor para a altura:\n");
	scanf("%f %f", &base, &altura);
	printf("A área é: %.2f\n", base * altura);
	printf("O perímetro é: %.2f", (base*2)+(altura*2));
	return 0;
}