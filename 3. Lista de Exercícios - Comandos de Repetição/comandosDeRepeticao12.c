#include <stdio.h>

int main(void)
{
    int nDigitado, quantidadeNpares;

    printf("Escreva um algoritmo que leia 20 números do usuário e exiba quantos números são pares: \n");
    printf("Digite 20 numeros: \n");

    for (int i = 0; i < 20 ; ++i)
    {
        scanf("%d", &nDigitado);
        if (nDigitado % 2 == 0)
        {
            quantidadeNpares++;
        }
    }

    printf("\nA quantidade de numeros pares e: %d", quantidadeNpares);

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