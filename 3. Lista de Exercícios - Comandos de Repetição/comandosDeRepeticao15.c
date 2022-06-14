#include <stdio.h>

int main()
{
    int nDigitado, soma = 0;

    printf("Digite 20 numeros maiores que ZERO, nao erre usuario: \n");

    do
    {
        scanf("%i", &nDigitado);
        if (nDigitado > 0)
        {
            soma = soma + nDigitado;
        }
    }
    while(nDigitado >= 0);

    printf("\nSoma: %d", soma);

    return 0;
}