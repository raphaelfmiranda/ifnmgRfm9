#include <stdio.h>
int main()
{
    char nota_conceito;
    printf("Digite uma nota de A a F: ");
    scanf("%c", &nota_conceito);

    switch (nota_conceito)
    {
        case 'A' :
            printf("EXCELENTE");
            break;
        case 'B' :
            printf("ÓTIMO");
            break;
        case 'C' :
            printf("BOM");
            break;
        case 'D' :
            printf("REGULAR");
            break;
        case 'E' :
            printf("RUIM");
            break;
        case 'F' :
            printf("NOS VEMOS NOVAMENTE NO PRÓXIMO ANO");
            break;
        default  :
            printf("ERRO, DIGITE APENAS LETRAS MAIUSCULAS");
    }
    return 0;
}