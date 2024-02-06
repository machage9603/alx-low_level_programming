#include "lists.h"

/*
 * listinr_len - returns the no. of nodes in a linked list
 * @h: head of the list
 * Return: number of nodes
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
