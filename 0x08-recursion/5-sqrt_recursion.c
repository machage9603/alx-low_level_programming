#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The natural square root of the number, or -1 if not found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @i: The current candidate for the square root
 * Return: The natural square root of the number, or -1 if not found
 */

int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	else if (i * i > n)
		return (-1);

	else
		return (find_sqrt(n, i + 1));
}
