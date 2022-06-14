#include <stdio.h>
int main()
{
    int soma;

    soma = 0;

    for (int i = 1; i <= 15 ; ++i)
    {
        soma = i + soma;
    }
    printf("%i\n", soma);
    return 0;
}