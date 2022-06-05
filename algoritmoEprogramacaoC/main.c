#include <stdio.h>
#include <math.h>

int main()
{
    int selecao;

    printf("SELECIONE O PROGRAMA: \n");
    printf("1 - SOMA DE DOIS NUMEROS: \n");
    printf("2 - CALCULO DIAS TRABALHADOS A R$ 50.70: \n");
    printf("3 - CALCULADORA DE PADARIA - QAUNTIDADE E VALOR DO PAO: \n");
    printf("4 - CALCULADORA DE SUPERMERCADO - QAUNTIDADE E VALORES DE PAO, LEITE E SUCO: \n");
    printf("5 - CALCULADORA DE NOVO SALARIO: \n");
    printf("6 - CALCULA NUMERO AO QUADRO, AO CUBO E A RAIZ QUADRADA: \n");
    printf("7 - IDADE EM 2018 E 2030: \n");
    printf("8 - CALCULO DE AREA E PERIMETRO DE UM RETANGULO: \n");
    printf("9 - CALCULO DE IMC: \n");
    printf("10 - CALCULO DE AREA E CIRCUNFERENCIA DE UM CIRCULO: \n");
    printf("11 - CALCULA MEDIA DE QUATRO IDADES: \n");
    printf("12 - SUCESSOR E ANTECESSOR DE UM NUMERO: \n");


    scanf("%d", &selecao);


    switch (selecao)
    {
        case (1):

            {
                int n1, n2;
                printf("DIGITE DOIS NUMEROS: \n")   ;   scanf("%d %d", &n1, &n2);
                printf("A SOMA DOS NUMEROS E: %d",  n1 + n2);
                return 0;
            }

        case (2):
            {
                float nDias;
                printf("DIGITE A QUANTIDADE DE DIAS \n")   ;   scanf("%f", &nDias);
                printf("O VALOR A SER PAGO E: \n%.2f", 50.70 * nDias);
                return 0;
            }

        case (3):
            {
                float valorPao , qPao;
                printf("PRECO DO PAO: \n")          ;    scanf("%f", &valorPao);
                printf("QUANTIDADE DE PAES: \n")    ;    scanf("%f", &qPao);
                printf("O VALOR A PAGAR E: \n%.2f", valorPao * qPao);
                return 0;
            }

        case (4):
            {
                float qPao , qLeite , qSuco , valorPao , valorLeite , valorSuco , total;
                printf("QUANTIDADE DE PAES: \n")      ;       scanf("%f", &qPao);
                printf("QUANTIDADE DE LEITE: \n")     ;       scanf("%f", &qLeite);
                printf("QUANTIDADE DE SUCO: \n")      ;       scanf("%f", &qSuco);
                printf("VALOR DO PAO: \n")            ;       scanf("%f", &valorPao);
                printf("VALOR DO LEITE: \n")          ;       scanf("%f", &valorLeite);
                printf("VALOR DO SUCO: \n")           ;       scanf("%f", &valorSuco);
                    total = (qPao * valorPao) + (qLeite * valorLeite) + (qSuco * valorSuco);
                printf("O VALOR DA COMPRA E: \n%.2f", total);
                return 0;
            }
        case (5):
            {
                float salarioAtual;
                printf("VALOR ATUAL DO SALARIO: \n")    ;    scanf("%f", &salarioAtual);
                printf("O SALARIO REAJUSTADO E: \n%.2f", salarioAtual * 1.25);
                return 0;
            }
        case (6):
            {
                float x;
                printf("DIGITE UM NUMERO: \n")    ;    scanf("%f", &x);
                printf("\nO NUMERO AO QUADRADO E: %.2f", pow(x, 2));
                printf("\nO NUMERO AO CUBO E: %.2f", pow (x , 3));
                printf("\nA RAIZ QUADRADA E: %.2f", sqrt(x));
                printf("\nOUTRA FORMA | NUMERO AO QUADRADO: %.2f", x * x);
                printf("\nOUTRA FORMA | NUMERO AO CUBO: %.2f", x * x * x);
                printf("\nOUTRA FORMA | A RAIZ QUADRADA E: %.2f", x * 1/2);
                return 0;
            }
        case (7):
            {
                int idade;
                printf("DIGITE A SUA IDADE: \n")   ;     scanf("%d", &idade);
                printf("EM 2018 VOCE TINHA: %d", (idade - (2022 - 2018)));
                printf("\nEM 2030 VOTE TERA: %d", (idade + (2030 - 2018)));
                return 0;
            }
        case (8):
            {
                float a, b, area, perimetro;
                printf("DIGITE UM VALOR PARA ALTURA E OUTRO PARA BASE: ");
                scanf("\n%f %f", &a , &b);
                area = b * a;
                perimetro = b * 2 + a * 2;
                printf("\nO RETANGULO TEM AREA DE: %.2f", area);
                printf("\nE O PERIMETRO DE: %.2f", perimetro);
                return 0;
            }
            case(9):
            {
                float imc, peso, altura;
                printf("DIGITE O SEU PESO E A SUA ALTURA: \n");
                scanf("%f %f", &peso, &altura);
                imc = peso / pow(altura, 2);
                printf("\nSEU IMC E: %.2f", imc);
                return 0;
            }
        case (10):
            {
                float r, pi = 3.14;
                printf("DIGITE O VALOR DO RAIO: ")      ;   scanf("%f", &r);
                printf("\nA AREA DO CICULO E: %.2f", (pi * (r * r)));
                printf("\nA CIRDCUNFERENCIA DO CICULO E: %.2f", (2 * (pi * r)));
                return 0;
            }
        case (11):
            {
                float i1, i2, i3, i4, iSoma;
                printf("DIGITE QUATRO VALORES NUMERICOS PARA IDADE: \n")    ;   scanf("%f %f %f %f", &i1, &i2, &i3, &i4);
                iSoma = (i1 + i2 + i3 + i4);
                printf("A MEDIA E: %.2f", iSoma / 4);
                return 0;
            }
        case (12):
            {
                int n;
                printf("DIGITE UM NUMERO: ")   ;   scanf("%d", &n);
                printf("\nSUCESSOR E: %d", n+1);
                printf("\nANTECESSOR E: %d", n-1);
                return 0;
            }
    }
    return 0;
}