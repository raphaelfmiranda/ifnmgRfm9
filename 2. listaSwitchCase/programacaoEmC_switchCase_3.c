#include <stdio.h>

int main()
{
    int seletor;

    float n1, n2;

    printf("1 - MEDIA ENTRE OS NUMEROS DIGITADOS: \n");
    printf("2 - DIFERENCA ENTRE OS NUMEROS: \n");
    printf("3 - PRODUTO ENTRE OS NUMEROS DIGITADOS: \n");
    printf("4 - DIVISAO DO PRIMEIRO PELO SEGUNDO: \n");
    printf("---------------------------------------- \n");
    printf("DIGITE A SUA OPCAO: ");
    scanf("%d", &seletor);

    printf("Digite o 1o numero: ")   ;   scanf("%f", &n1);
    printf("Digite o 2o numero: ")   ;   scanf("%f", &n2);

    switch(seletor)
    {
        case (1):
        {
            printf("%.2f", ((n1+n2)/2));
        }
        break;

        case (2):
        {
            printf("%.2f", n1-n2);
        }
        break;

        case (3):
        {
            printf("%.2f", n1*n2);
        }
        break;

        case (4):
        {
            printf("%.2f", n1/n2);
        }
        break;

        default:
            printf("\nERRO\n");
            return 0;
    }
    return 0;
}