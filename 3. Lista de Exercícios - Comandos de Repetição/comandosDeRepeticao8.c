#include <stdio.h>

int main()
{
    int idades[20];

    for (int i = 0; i < 20 ; i++)
    {
        printf("Digite sua idade: ")    ;   scanf("%i", &idades[i]);
    }

    printf("\nOs maiores têm as idades de:");

    for (int i = 0; i < 20 ; i++)
    {
        if (idades[i] >= 18)
        {
            printf("\n%2i", idades[i]);
        }

    }
    return 0;
}