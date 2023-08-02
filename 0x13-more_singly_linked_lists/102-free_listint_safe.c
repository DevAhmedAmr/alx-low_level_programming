#include "lists.h"
size_t free_listint_safe(listint_t **h)
{
	size_t list_len = 0;
	listint_t *curr,
		*next;
	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		if (curr > next)
		{
			free(curr);
			curr = next;
			list_len++;
		}
		else
		{
			list_len++;

			free(curr);
			break;
		}
	}
	*h = NULL;
	return list_len;
}