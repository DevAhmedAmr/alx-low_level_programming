#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr = head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;

		if (curr > next)
		{
			curr = next;
		}
		if (curr == next)
		{
			return curr;
		}
	}
	return NULL;
}