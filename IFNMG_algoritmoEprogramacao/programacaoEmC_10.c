#include <stdio.h>
#include <math.h>
#define PI 3.14
main()
{
	float raio;
	printf("Digite o valor do raio do círculo:\n");
	scanf("%f", &raio);
	printf("A área do círculo é: %.2f", (PI * pow(raio, 2)));
	printf("\nA circunferência é de: %.2f", (2 * PI * raio));
	return 0;
}