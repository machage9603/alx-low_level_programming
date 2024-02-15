#include "main.h"

/**
 * largest_number - returns the largest of the 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: 0
 */

int largest_number(int a, int b, int c)
{

		if (a > b && a > c)
		{
			printf("%d is the largest number\n", a);
		}

		else if (b > a && b > c)
		{
			printf("%d is the largest number\n", b);
		}

		else
		{
			printf("%d is the largest number\n", c);
		}
		return (0);
}

