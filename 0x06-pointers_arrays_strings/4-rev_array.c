#include "main.h"

/**
 * reverse_array - reverses the content of an array of intergers
 * @a: pointer to the array of intergers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
