#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>
//asdadasdasdasdadasd
int dz();

int main()
{
	setlocale(LC_ALL, "RUS");

	dz();

	return 0;
}

int dz()
{
	int a;
	char symbol, answer;
	do
	{
		printf("\nВведите символ из которого будет строиться фигура: ");
		scanf(" %c", &symbol);

		printf("\nВведите значение а: ");
		scanf(" %d", &a);

		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= 2 * a - i; j++)
			{
				if (i == 1 || j == i || j == 2 * a - i)
				{
					printf("%c", symbol);
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("Продолжить? (Да - y, нет - n): ");
		scanf(" %c", &answer);
	} while (answer == 'y' || answer == 'Y');
	return 0;
}