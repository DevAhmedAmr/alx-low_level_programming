#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return 1;

	if (index == 0)
	{
		tmp = curr;
		curr->prev = NULL;
		*head = curr->next;
		free(tmp);
		return 1;
	}

	for (; curr; curr = curr->next, i++)
	{

		if ((curr->next == NULL) && (i == index))
		{

			tmp = curr;
			curr->prev->next = NULL;
			free(tmp);

			return 1;
		}
	}
	return -1;
}
