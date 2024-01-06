#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase followed by a new line
 *
 * Return: always 0 on success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
