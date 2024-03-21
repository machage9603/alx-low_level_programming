#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of list
 * @h: pointer to head of list
 * @n: element to be added
 * Return: NULL if failed otherwise address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	*head = new_node;

	return(new_node);
}


