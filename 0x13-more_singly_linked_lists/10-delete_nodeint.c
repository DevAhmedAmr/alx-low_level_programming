#include "lists.h"
size_t listint_len(const listint_t *h);
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0, list_len = listint_len(*head);
	listint_t *curr;

	curr = *head;

	if ((index > list_len) || (list_len == 0))
		return (-1);

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

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}