#include "main.h"

/**
 * _puts - function that is going to print a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ;  i++)
		_putchar(str[i]);
	_putchar('\n');
}
