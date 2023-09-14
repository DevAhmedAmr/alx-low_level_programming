#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;

	while (curr)
	{
		dlistint_t *next = curr->next;
		free(curr);
		curr = next;
	}
}
