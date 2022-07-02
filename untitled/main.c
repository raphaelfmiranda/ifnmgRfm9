#include <stdio.h>

int main()
{

    printf("Teste de estruturas de repeticao:\nDigite um numero: \n");

    for (int i = 1 ; i <= 10 ; i++)
    {
        printf("\nseq: %0.2d | %0.2d | %0.2d | %0.2d | %0.2d | %0.2d | %0.2d | %0.2d | %0.2d | %0.3d", i, (i*2), (i*3), (i*4), (i*5), (i*6), (i*7), (i*8), (i*9), (i*10));
    }


    return (printf("\nFIM"));
}
