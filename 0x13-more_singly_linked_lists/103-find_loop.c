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

			curr = next;
		}
		else
		{
			return next;
		}
	}
	return (NULL);
}
