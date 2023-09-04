#include <stdio.h>
#include<math.h>
#define MAX 1000

int main() {
	//Binario para Decimal
	int numBin, j, total = 0, numNew;
	printf("Digite um numero binario para ser convertido em decimal: ");
	scanf_s("%d", &numBin);
	int resultado = numBin;

	for (j = 0; j < 6; j++) {
		numNew = numBin - ((numBin / 10) * 10);
		numBin = numBin / 10;
		total += numNew * pow(2, j);
	}

	printf("O numero %d em decimal eh: %d", resultado, total);
	printf("\n");

	//Binario para Octal
	int numBin1, j1, total1 = 0, numDec;
	printf("Digite um numero binario para ser convertido em octal: ");
	scanf_s("%d", &numBin1);
	int result = numBin1;

	for (j1 = 0; j1 < 6; j1++) {
		numDec = numBin1 - ((numBin1 / 10) * 10);
		numBin1 = numBin1 / 10;
		total1 += numDec * pow(2, j1);
	}

	int bin[MAX]{};
	int i = 0, j3;

	while (total1 > 0) {
		bin[i] = total1 % 8;
		i++;
		total1 = total1 / 8;
	}

	printf("O numero %d em octal eh: %.d", result, total1);

	for (j3 = i - 1; j3 >= 0; j3--)
		printf("%d", bin[j3]);
	printf("\n");
	
	//Binario para Hexadecimal

	int numBin2, j4, total2 = 0, numHex;
	printf("Digite um numero binario para ser convertido em hexadecimal: ");
	scanf_s("%d", &numBin2);
	int result1 = numBin2;

	for (j4 = 0; j4 < 6; j4++) {
		numHex = numBin2 - ((numBin2 / 10) * 10);
		numBin2 = numBin2 / 10;
		total2 += numHex * pow(2, j4);
	}
	int bin1[MAX]{};
	int i1 = 0, j5;

	while (total2 > 0) {
		bin1[i1] = total2 % 16;
		i1++;
		total2 = total2 / 16;
	}
	
	printf("O numero %d em hexadecimal eh: %.d", result1, total2);

	for (j5 = i1 - 1; j5 >= 0; j5--)
		printf("%d", bin1[j5]);
	printf("\n");
}