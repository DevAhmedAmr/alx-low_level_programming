#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *next;

	if (*head == NULL)
		return NULL;

	next = (*head)->next;

	int n = (*head)->n;

	free((*head));
	*head = next;
	return n;
}