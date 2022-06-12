#include <stdio.h>

int main()
{

    int n1, n2, seletor;

    printf("1 - Média dos números digitados\n");
    printf("2 - Diferença entre os números\n");
    printf("3 - Produto entre os números digitados\n");
    printf("4 - Divisão do 1o pelo 2o\n");
    printf("Digite sua opção: \n")
    scanf("%d", &seletor);


    printf("Digite dois números: \n");
    scanf("%d%d", &n1, &n2);


    printf("%d", n1 * n2);

}