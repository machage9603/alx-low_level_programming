#include <stdio.h>

/**
 * main - entry point of the program
 * Description: prints all single-digit numbers of the base 10 starting
 * from 0 followed by new line. uses putchar function
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
