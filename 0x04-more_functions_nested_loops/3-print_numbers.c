#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * _putchar - prints out the function
 * Return: 0 always
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
