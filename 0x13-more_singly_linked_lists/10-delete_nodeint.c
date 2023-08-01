#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *curr;

	curr = *head;

	if (head == NULL)
		return -1;

	while (curr != NULL)
	{
		listint_t *before;

		if (idx + 1 == index)
			before = curr;

		if (idx == index)
		{
			listint_t *next = curr->next;

			free(curr);
			curr = next;

			if (index > 1)
				before->next = curr;

			else
				*head = curr;

			return 1;
		}
		else if (idx < index)
		{
			curr = curr->next;
			idx++;
		}
	}
	return -1;
}
