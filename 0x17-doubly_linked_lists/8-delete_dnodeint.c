#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return 1;

	if (index == 0)
	{

		return 1;
	}

	for (; curr; curr = curr->next, i++)
	{

		if ((curr->next == NULL) && (i == index))
		{

			curr->prev->next = NULL;

			return 1;
		}
	}
	return -1;
}
