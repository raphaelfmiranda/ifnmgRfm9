#include <stdio.h>
main()
{
	int i1, i2, i3, i4;
	printf("Digite 4 idades:\n");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
	printf("\nA média das idades é: %.2f", ((i1 + i2 + i3 + i4)/4.0));
	return 0;
}