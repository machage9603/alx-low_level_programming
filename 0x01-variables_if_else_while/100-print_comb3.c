#include <stdio.h>

/**
 * print_comb2 - prints all possible combinations of two digits
 */

void print_comb2(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = i + 1; j <= 9; ++j)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	print_comb2();
	return (0);
}
