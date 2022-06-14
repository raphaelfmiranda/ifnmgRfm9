#include <stdio.h>

int main()
{
    int produto, quantidade;

    printf("PRODUTOS DISPONIVEIS:\n");
    printf("100 - CACHORRO QUENTE\n");
    printf("101 - BAURU SIMPLES\n");
    printf("102 - BAURU COM OVO\n");
    printf("103 - HAMBURGUER\n");
    printf("104 - CHEESEBURGUER\n");
    printf("105 - REFRIGERANTE\n");
    printf("---------------------------------------- \n");
    printf("DIGITE A SUA OPCAO: ")   ;   scanf("%d", &produto);
    printf("DIGITE A QUANTIDADE: ")  ;   scanf("%d", &quantidade);


    switch (produto)
    {
        case (100):
        {
            printf("O valor a pagar para %d cachorro quente e: %.2f", quantidade, quantidade * 1.70);
        }
        break;

        case (101):
        {
            printf("O valor a pagar para %d bauru simples e: %.2f", quantidade, quantidade * 2.30);
        }
            break;

        case (102):
        {
            printf("O valor a pagar para %d bauru com ovo e: %.2f", quantidade, quantidade * 2.60);
        }
            break;

        case (103):
        {
            printf("O valor a pagar para %d hamburguer e: %.2f", quantidade, quantidade * 2.40);
        }
            break;

        case (104):
        {
            printf("O valor a pagar para %d cheeseburguer e: %.2f", quantidade, quantidade * 2.50);
        }
            break;

        case (105):
        {
            printf("O valor a pagar para %d refrigerante e: %.2f", quantidade, quantidade * 1.00);
        }
            break;

        default:
            printf("VOCE DIGITOU O CODIGO DO PRODUTO ERRADO\n");
    }
    return 0;
}