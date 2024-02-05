#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the no. of elements in linked list_t list
 * @h: head for list_t
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

