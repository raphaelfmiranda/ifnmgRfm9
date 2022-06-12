#include <stdio.h>

int main()
{
    int idadeDigitada, soma;

        soma = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite sua idade: \n")      ;       scanf("%i", &idadeDigitada);

        soma = soma + idadeDigitada;

    }
    printf("A soma das idades é: %i1", soma);
    return 0;
}