#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @str: string
 * @head: head of the list
 * Return: address of new element, otherwise NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)

		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
