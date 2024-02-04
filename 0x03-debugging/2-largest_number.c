#include "main.h"

/**
 * largest_number - returns the largest of the 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
		int largest;

		if (a >= b && b >= c)
		{
			largest = a;
		}
		else if (b >= a && a >= c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
		return (largest);
}

