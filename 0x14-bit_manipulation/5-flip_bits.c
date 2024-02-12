#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: contains bits to be flipped
 * @m: flip to get here
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int i = 0;

	x = n ^ m;

	for (i = 0; x != 0; i += 1)
		x &= (x - 1);
	return (i);
}
