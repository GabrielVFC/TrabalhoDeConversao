#include <stdio.h>
#include <math.h>
#define MAX 1000
int main() {
	//Hexadecimal para Decimal
	int numHex, j = 0, numDec, total = 0;
	printf("Digite um numero hexadecimal para converter em decimal: ");
	scanf_s("%x", &numHex);
	int resultado = numHex;

	while (numHex != 0) {
		numDec = numHex % 10;
		numHex /= 10;
		total += numDec * pow(16, j);
		++j;
	}

	printf("O numero %d em decimal eh: %x", resultado, total);
	printf("\n");

	//Hexadecimal para binario
	int numHex1, j1 = 0, numDec1, total1 = 0;
	printf("Digite um numero hexadecimal para converter em binario: ");
	scanf_s("%x", &numHex1);
	int resultado1 = numHex1;

	while (numHex1 != 0) {
		numDec1 = numHex1 % 10;
		numHex1 /= 10;
		total1 += numDec1 * pow(16, j1);
		++j1;
	}

	int i = 0, j2;
	int bin[MAX]{};

	while (total1 > 0) {
		bin[i] = total1 % 2;
		i++;
		total1 = total1 / 2;
	}

	printf("O numero %d em binario eh: %.d",resultado1,total1);

	for (j2 = i - 1; j2 >= 0; j2--)
		printf("%d", bin[j2]);
	printf("\n");

	//Hexadecimal para Octal
	int numHex2, j3 = 0, numDec2, total3 = 0;
	printf("Digite um numero hexadecimal para converter em octal: ");
	scanf_s("%x", &numHex2);
	int resultado2 = numHex2;

	while (numHex2 != 0) {
		numDec2 = numHex2 % 10;
		numHex2 /= 10;
		total3 += numDec2 * pow(16, j3);
		++j3;
	}

	int bin2[MAX]{};
	int i2 = 0, j4;

	while (total3 > 0) {
		bin2[i2] = total3 % 8;
		i2++;
		total3 = (total3 / 8);
	}

	printf("O numero %d em hexadecimal eh: ", resultado2);

	for (j4 = i2 - 1; j4 >= 0; j4--)
		printf("%d", bin2[j4]);
}