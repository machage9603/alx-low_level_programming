#include <stdio.h>

/**
 * print_combinations - Prints all possible combinations of three digits.
 */
void print_combinations(void);
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	print_combinations();
	return (0);
}

/**
 * print_combinations - Prints all possible different combinations,
 * of three digits.
 */

void print_combinations(void)
{
	int i, j, k;

	for (i = 0; i <= 7; ++i)
	{
		for (j = i + 1; j <= 8; ++j)
		{
			for (k = j + 1; k <= 9; ++k)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
}
