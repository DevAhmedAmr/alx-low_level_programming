#include "lists.h"
size_t listint_len(const listint_t *h)
{
	int len = 0;
	listint_t *curr = (listint_t *)h;
	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}
	return len;
}