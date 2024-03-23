#include "lists.h"

/**
 * pop_listint - deletes head of node of the list
 * &returns its data
 * @head: pointer to pointer to the head node
 * Return: data of the popped node, or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;

	*head = (*head)->next;
	free(temp);

	return (n);
}
