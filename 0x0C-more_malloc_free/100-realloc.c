#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block previously allocated with malloc
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the new memory block
 * Return: Pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, min_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	min_size = old_size < new_size ? old_size : new_size;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < min_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);

	return (new_ptr);
}
