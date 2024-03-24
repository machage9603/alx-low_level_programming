#include <stdio.h>

/**
 * main - prints all arguments
 *
 * Return: 0 always
 */

int main (int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
