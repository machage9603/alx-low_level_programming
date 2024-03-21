#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of list
 * @head: pointer to the head of the node
 * @index: index of the node, starting from 0
 * Return: NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}

