#include <stdio.h>
#include <math.h>

int main() {
	//Binario para decimal
	int num1, j, num2, total = 0;
	printf("Digite um numero binario para converter em decimal: ");
	scanf_s("%d", &num1);
	int res = num1;

	//pega os dígitos da direita para a esquerda
	for (j = 0; j < 6; j++) {
		num2 = num1 - ((num1 / 10) * 10);
		num1 = num1 / 10;
		total += num2 * pow(2, j);
	}
	printf("O numero %d em decimal eh: %d", res, total);
	printf("\n");
	//Fim

	//Octal para decimal
	int num3, j2 = 0, num4, total2 = 0;
	printf("Digite um numero octal para converter em decimal: ");
	scanf_s("%d", &num3);
	int res2 = num3;

	while (num3 != 0)
	{
		num4 = num3 % 10;
		num3 /= 10;
		total2 += num4 * pow(8, j2);
		++j2;
	}

	printf("O numero %d em decimal eh: %d", res2, total2);
	printf("\n");
	//Fim


	//Hexadecimal para decimal
	int num5, j3 = 0, num6, total3 = 0;
	printf("Digite um numero hexadecimal para converter em decimal: ");
	scanf_s("%x", &num5);
	int res3 = num5;

	while (num5 != 0) {
		num6 = num5 % 10;
		num5 /= 10;
		total3 += num6 * pow(16, j3);
		++j3;
	}

	printf("O numero %d em decimal eh: %x", res3, total3);
}


