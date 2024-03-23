#include "lists.h"

/**
 * sum_listint - returns sum of all the data(n)
 * @head: pointer to head
 * Return: sum of all n
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int samn = 0;

	temp = head;

	while (temp != NULL)
	{
		samn = samn + temp->n;
		temp = temp->next;
	}
	return (samn);
}
