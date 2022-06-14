#include <stdio.h>
#define NOMES 4

int main()
{
    int idadeDigitada, menorIdadeDigitada;
    char nomeDigitado, menorNomeDigitado;

    printf("Digite o seu nome: ")    ;   scanf("\n%c", &nomeDigitado);
    printf("Digite sua idade : ")    ;   scanf("\n%i", &idadeDigitada);

    menorIdadeDigitada = idadeDigitada;
    menorNomeDigitado = nomeDigitado;


    for (int i = 0; i < NOMES - 1; i++)
    {
        printf("Digite o seu nome: ")    ;   scanf("\n%c", &nomeDigitado);
        printf("Digite sua idade : ")    ;   scanf("\n%i", &idadeDigitada);

        if (idadeDigitada < menorIdadeDigitada)
        {
            menorIdadeDigitada = idadeDigitada;
            menorNomeDigitado = nomeDigitado;
        }

    }
    printf("O menor nome digitado foi: %c", menorNomeDigitado);









}