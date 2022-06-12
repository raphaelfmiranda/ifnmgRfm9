#include <stdio.h>
int main()
{
    int numeroDigitado[20];

    for (int i = 0; i < 20 ; i++)
    {
    printf("Digite um número: ")    ;   scanf("%i", &numeroDigitado[i]);
    }

    printf("\nOs números maiores que 8 são: ");

    for (int i = 0; i < 20 ; i++)
    {
        if (numeroDigitado[i] >= 8)
        printf("\n%2i", numeroDigitado[i]);
    }
return 0;
}