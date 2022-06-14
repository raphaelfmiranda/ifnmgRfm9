#include <stdio.h>
int main()
{
    int numerosDigitados, soma;
    soma = 0;
    printf("Digite uma sequência de 10 números: \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &numerosDigitados);

            soma = soma + numerosDigitados;
    }

        printf("%i", soma);
    return 0;
}