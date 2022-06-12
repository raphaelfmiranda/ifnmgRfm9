#include <stdio.h>
int main()
{
    char nomeDigitado[32];
    printf("Digite seu nome: \n");
    scanf("%s", nomeDigitado);

        for (int i = 0; i < 10; ++i)
        {
            printf("%.2d %s\n", i, nomeDigitado);
        }
    return 0;
}