#include "lists.h"
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *next;
	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		if (curr > next)
		{
			free(curr);
			curr = next;
		}
		else
		{
			free(curr);
			break;
		}
	}
	*h = NULL;
	return 0;
}