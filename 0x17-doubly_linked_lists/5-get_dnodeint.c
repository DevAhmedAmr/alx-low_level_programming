#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	const dlistint_t *curr = head;
	size_t n = 0;

	while (curr != NULL)
	{
		if (n == index)
			return curr;

		curr = curr->next;
		n++;
	}
	return (NULL);
}
