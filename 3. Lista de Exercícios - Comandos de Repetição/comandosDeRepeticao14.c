#include <stdio.h>

int main()
{
    int nDigitado[20], quantosEntre0e100 = 0, quantosEntre101e200 = 0, quantosMaioresQue200 = 0;

    printf("Digite 20 numeros: \n");

    for (int i = 0 ; i < 20 ; i++)
    {
        scanf("%d", &nDigitado[i]);
    }
    for (int i = 0 ; i < 20 ; i++)
    {
        if (nDigitado[i] > 0 && nDigitado[i] <= 100)
        {
            quantosEntre0e100++;
        }

        if (nDigitado[i] >= 101 && nDigitado[i] < 200)
        {
            quantosEntre101e200++;
        }

        if (nDigitado[i] > 200)
        {
            quantosMaioresQue200++;
        }
    }
    printf("\nQuantidade de numeros entre 0 e 100 e: %d", quantosEntre0e100);
    printf("\nQuantidade de numeros entre 101 e 200 e: %d", quantosEntre101e200);
    printf("\nQuantidade de numeros maiores que 200: %d", quantosMaioresQue200);

    return 0;
}