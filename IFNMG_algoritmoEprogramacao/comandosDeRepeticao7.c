#include <stdio.h>

main()
{
    int idadeDigitada, soma, media;

    soma = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite a sua idade: ")      ;       scanf("%i", &idadeDigitada);

        soma = soma + idadeDigitada;
    }

    media = soma / 20;

    printf("A média é: %i", media);

    return 0;
}