#include <stdio.h>
#define MAX 1000

int main()
{
	//Decimal para binário
	int numeroDecimal;
	printf("Digite um numero decimal para converter em binario: ");
	scanf_s("%d", &numeroDecimal);
	int bin[MAX];
	int i = 0, j;
	int total = numeroDecimal;

	while (numeroDecimal > 0)
	{
		bin[i] = numeroDecimal % 2;
		i++;
		numeroDecimal = numeroDecimal / 2;
	}

	printf("O numero %d em binario eh: ", total);

	//Pega os numeros do ultimo para o primeiro
	for (j = i - 1; j >= 0; j--)
		printf("%d", bin[j]);
	printf("\n");
	//Fim

	//Decimal para octal
	int numeroDecimal2;
	printf("Digite um numero decimal para converter em octal: ");
	scanf_s("%d", &numeroDecimal2);
	int bin2[MAX];
	int i2 = 0, j2;
	int res = numeroDecimal2;

	while (numeroDecimal2 > 0) {
		bin2[i2] = numeroDecimal2 % 8;
		i2++;
		numeroDecimal2 = numeroDecimal2 / 8;
	}

	printf("O numero %d em octal eh: ", res);

	for (j2 = i2 - 1; j2 >= 0; j2--)
		printf("%d", bin2[j2]);
	printf("\n");
	//Fim

	//Decimal para hexadecimal
	int numeroDecimal3, a;
	printf("Digite um numero decimal para converte para hexadecimal: ");
	scanf_s("%d", &numeroDecimal3);
	int bin3[MAX];
	int i3 = 0, j3;
	int valor = numeroDecimal3;

	while (numeroDecimal3 > 0) {
		bin3[i3] = numeroDecimal3 % 16;
		i3++;
		numeroDecimal3 = numeroDecimal3 / 16;
	}

	printf("O numero %d em hexadecimal eh: ", valor);

	for (j3 = i3 - 1; j3 >= 0; j3--)
		printf("%d", bin3[j3]);
	printf("\n");


	//Fim

	return(0);





}