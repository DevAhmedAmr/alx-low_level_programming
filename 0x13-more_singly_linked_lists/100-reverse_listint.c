#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		*head = curr;
		curr = curr->next;
		(*head)->next = before;
		before = *head;
	}
	return *head;
}
