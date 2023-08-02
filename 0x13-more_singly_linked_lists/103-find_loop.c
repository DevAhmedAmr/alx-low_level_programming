#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr;

	curr = head;

	if (head == NULL)
	{
		return NULL;
	}

	while (curr != NULL)
	{
		listint_t *next = curr->next;

		if (curr > next)
		{
			if (curr != NULL && next != NULL)
			{
				printf("-------------- next %lu %i, current %lu %i\n", (unsigned long int)next, next->n, (unsigned long int)curr, curr->n);
			}

			curr = next;
		}
		else
		{
			printf(">>> next %lu %i, current %lu %i\n", (unsigned long int)next, next->n, (unsigned long int)curr, curr->n);

			return next;
		}
	}
	return (NULL);
}
