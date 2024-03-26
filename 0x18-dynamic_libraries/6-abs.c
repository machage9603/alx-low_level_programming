#include "main.h"

/**
 * _abs - computes the absolute value of an interger
 * @n: the interger to compute the absolute value for
 * Return: the absolute value of the interger
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
