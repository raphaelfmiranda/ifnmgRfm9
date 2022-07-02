#include <stdio.h>
#include <string.h>

int main ()
{
    char frase[32];
    int i = 0 , qtd = 0;

    printf("Digite uma frase: ");
    gets(frase);

    for ( i = 0 ; frase[i] != '\0' ; i++)
    {
        if (	frase[i] != 'a' &&
                frase[i] != 'e' &&
                frase[i] != 'i' &&
                frase[i] != 'o' &&
                frase[i] != 'u')
        {
            printf("%c" , frase[i]);
        }







        //	printf("%c\n" , frase[i]);
    }




}





/*
{
	char texto[32];
	puts("Digite uma frase: ")   ;   gets(texto);
	printf("%s", texto);
}
*/

/*
{
	char texto[32];
	puts("Digite uma frase: ")   ;   gets(texto);
	printf("\nO tamanho da string e: %d", strlen(texto));
}
*/


/*	char texto[32];
	int i , qtd;

	printf("Digite uma frase: ");
	gets(texto);

	for ( i = 0 ; texto[i] != '\0' ; i++ )
	{
		qtd = qtd + 1;
	}


	//	quantidadeDeCaracteres = quantidadeDeCaracteres + 1;


		/*
		for( i = 0; x[i] != 0; ++i);
		return i;
		*/


/*	char frase1[32] , frase2[32];
	int i;

	printf("Digite duas frases: \n");
	gets(frase1);
	gets(frase2);

	if ( strcmp(frase1 , frase2) == 0 )
	{
		printf("\nSao iguais!");
	}
	else
	{
		printf("\nSao diferentes!");
	}
*/
