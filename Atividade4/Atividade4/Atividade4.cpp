#include <stdio.h>
#include <math.h>
#define MAX 1000

int main() {
	//Octal para Decimal
	int numOct, j = 0, numDec, total = 0;
	printf("Digite um numero octal para converter em decimal: ");
	scanf_s("%d", &numOct);
	int resultado = numOct;

	while (numOct != 0) {
		numDec = numOct % 10;
		numOct /= 10;
		total += numDec * pow(8, j);
		++j;
	}

	printf("O numero %d em decimal eh: %d", resultado, total);
	printf("\n");



	//Octal para Binario
	
	int numOct1, j1 = 0, numDec1, total1 = 0;
	printf("Digite um numero octal para converter em binario: ");
	scanf_s("%d", &numOct1);
	int result = numOct1;

	while (numOct1 != 0) {
		numDec1 = numOct1 % 10;
		numOct1 /= 10;
		total1 += numDec1 * pow(8, j1);
		++j1;
	}

	int bin[MAX]{};
	int i = 0, j2;

	while (total1 > 0) {
		bin[i] = total1 % 2;
		i++;
		total1 = total1 / 2;
	}

	printf("O numero %d em octal eh: ", total1);

	for (j2 = i - 1; j2 >= 0; j2--)
		printf("%d", bin[j2]);
	printf("\n");



	//Octal para Hexadecimal
	int numOct2, j3 = 0, numDec3, total2 = 0;
	printf("Digite um numero octal para converter em Hexadecimal: ");
	scanf_s("%o", &numOct2);
	int resultado1 = numOct2;

	while (numOct2 != 0) {
		numDec3 = numOct2 % 10;
		numOct2 /= 10;
		total2 += numDec3 * pow(8, j3);
		++j3;
	}

	int bin1[MAX]{};
	int i1 = 0, j4;

	while (total2 > 0) {
		bin1[i1] = total2 % 16;
		i1++;
		total2 = total2 / 16;
	}

	printf("O numero %d em hexadecimal eh: %.d",resultado1, total2);

	for (j4 = i1 - 1; j4 >= 0; j4--)
		printf("%d", bin1[j4]);
	printf("\n");


	



}
