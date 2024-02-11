#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of the list
 * @head: pointer to the head
 * @n: data in node being added
 * Return: the address of the new element, or NULL if it fails
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode =  (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

