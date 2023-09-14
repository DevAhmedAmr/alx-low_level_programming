#include "lists.h"
/**
 * free_dlistint -  function that frees a dlistint_t list.
 * @head: a pointer to the first node to be deleted
 */

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
