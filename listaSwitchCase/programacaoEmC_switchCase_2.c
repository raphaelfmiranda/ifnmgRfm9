#include <stdio.h>

int main()
{
    int nDigitado;
    printf("Digite um número entre 1 e 10:\n");
    scanf("%d", &nDigitado);

    switch(nDigitado)
    {
        case 1 : printf("I"); break;
        case 2 : printf("II"); break;
        case 3 : printf("III"); break;
        case 4 : printf("IV"); break;
        case 5 : printf("V"); break;
        case 6 : printf("VI"); break;
        case 7 : printf("VII"); break;
        case 8 : printf("VIII"); break;
        case 9 : printf("IX"); break;
        case 10 : printf("X"); break;
        default : printf("ERRO");
    }
    return 0;
}