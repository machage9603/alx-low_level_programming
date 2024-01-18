#include "main.h"

/**
 * _calloc - Allocates memory for an array, initialized with zeros.
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 * Return: A pointer to the allocated memory or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	if (total_size / nmemb != size)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, total_size);

	return (ptr);

}

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to fill the memory area with
 * @n: Number of bytes to be filled
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
