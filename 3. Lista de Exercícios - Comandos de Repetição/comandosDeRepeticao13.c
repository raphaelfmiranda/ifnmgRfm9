#include <stdio.h>

int main()
{
    int nDigitado[20];

    printf("Digite 20 numeros para saber quais estao entre 0 e 100: \n");

    for (int i = 0 ; i < 20 ; i++)
    {
        scanf("%d", &nDigitado[i]);
    }
    for (int i = 0 ; i < 20 ; i++)
    {
        if (nDigitado[i] > 0 && nDigitado[i] < 100)
        {
            printf("\n %d", nDigitado[i]);
        }
    }
    return 0;
}