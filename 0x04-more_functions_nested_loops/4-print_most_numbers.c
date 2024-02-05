#include "main.h"
/**
 * print_most_numbers - does not print 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int integer;

	for (integer = 48; integer < 58; integer++)
	{
		if ((integer == 50) || (integer == 52))
		{
			continue;
		}
		_putchar(integer);
	}
	_putchar(10);
}
