#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return 1; /* Return -1 for an empty list.*/

	/* Handling the case of deleting the first node (index = 0).*/
	if (index == 0)
	{
		*head = curr->next; /* Update the head.*/
		if (curr->next != NULL)
		{
			curr->next->prev = NULL;
		}
		free(curr); /* Free the memory of the old head.*/
		return 1;	/* Return 0 for success.*/
	}

	while (curr != NULL)
	{
		if (i == index)
		{
			curr->prev->next = curr->next;

			if (curr->next != NULL)
				curr->next->prev = curr->prev;

			free(curr); /* Free the memory of the deleted node.*/
			return 1;	/* Return 0 for success.*/
		}
		curr = curr->next;
		i++;
	}

	return 1; /* Index is out of bounds.*/
}
