#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned idx = 0;
	listint_t *curr;

	if (head == NULL)
		return NULL;

	curr = head;

	while (curr != NULL)
	{
		if (idx < index)
		{
			idx++;
			curr = curr->next;
		}
		else if (index == idx)

			return curr;

		else

			return NULL;
	}
	return NULL;
}