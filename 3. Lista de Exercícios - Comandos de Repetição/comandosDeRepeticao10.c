#include <stdio.h>
int main()
{
    int numeroDigitado;

    printf("Digite um número para ver a sua tabuada: ")     ;       scanf("%i", &numeroDigitado);

    printf("Tabuada de %i\n\n", numeroDigitado);

    for (int i = 1; i <= 10; i++)
    {
        printf("%2i x %2i = %2i\n", numeroDigitado , i , numeroDigitado * i);

    }
    return 0;
}