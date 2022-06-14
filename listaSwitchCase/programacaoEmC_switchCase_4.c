#include<stdio.h>

int main()
{

    int codigo_produto , qtd_produto;
    float valor_final;

    scanf("%d%d" , &codigo_produto , &qtd_produto);

    switch(codigo_produto){

        case 100:
            valor_final = qtd_produto * 1.70;
            break;
        case 101:
            valor_final = qtd_produto * 2.30;
            break;
        case 102:
            valor_final = qtd_produto * 2.60;
            break;
        case 103:
            valor_final = qtd_produto * 2.40;
            break;
        case 104:
            valor_final = qtd_produto * 2.50;
            break;
        case 105:
            valor_final = qtd_produto * 1.00;
            break;

    }

    printf("\nValor final :%.2f\n" , valor_final);


    return 0;
}