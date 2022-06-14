#include <stdio.h>

int main(void)
{

    int nDigitado;

    printf("Digite um numero para ser multiplicado e mostrar a sua tabuada ");
    scanf("%d", &nDigitado);

    for (int i = 1; i <= 99999999999999999; ++i)
    {
        printf("\n%2d . %2d = %2d", nDigitado, i, nDigitado * i);
    }

    return 0;
}










/*

int main()
{
    int numeroDigitado;

    do {
        printf("Digite um número difetente de zero: ")   ;   scanf("%i", &numeroDigitado);
        printf("")

    } while (numeroDigitado != 0);
    return 0;
}
 */