#include "lists.h"

/**
 * lisint_len - returns the number of elements in a linked list
 * @h: head of the list
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
			count++;
	}

	return (count);
}
