#include <stdio.h>

/**
 * main - entry point
 * Description: prints alphabet in lowercase, uppercase and new line
 *
 * Return: always 0 on success
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);
}
