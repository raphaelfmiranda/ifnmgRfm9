#include <stdio.h>
int main()
{
    int numeroDigitado;
    char nomeDigitado[32];

    printf("Digite um número: \n")  ;   scanf("%i", &numeroDigitado);
    printf("Digite o seu nome: \n") ;   scanf("%s", nomeDigitado);

    for (int i = 0; i < numeroDigitado; ++i)
    {
        printf("%.2i %s\n", i, nomeDigitado);
    }
    return 0;
}