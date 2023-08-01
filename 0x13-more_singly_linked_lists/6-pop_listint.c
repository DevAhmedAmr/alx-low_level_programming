#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *next;
	int n;

	if (*head == NULL)
		return 0;

	next = (*head)->next;

	n = (*head)->n;

	free((*head));
	*head = next;
	return n;
}