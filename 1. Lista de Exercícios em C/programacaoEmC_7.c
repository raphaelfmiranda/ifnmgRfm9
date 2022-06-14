#include <stdio.h>
main()
{
	int anoNascimento;
	printf("Digite o seu ano de nascimento:\n");
	scanf("%d", &anoNascimento);
	printf("A idade da pessoa em 2018 era : %d", 2018 - anoNascimento);
	printf("\nA idade da pessoa em 2030 será: %d", 2030 - anoNascimento);
	return 0;
}