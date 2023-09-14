#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; curr; curr = curr->next, i++)
	{
		if (curr->next == NULL && i + 1 == idx)
		{
			return (add_dnodeint_end(h, n));
		}
		if (i == idx)
		{

			dlistint_t *newNode = malloc(sizeof(dlistint_t));

			newNode->n = n;
			newNode->next = curr;
			newNode->prev = curr->prev;

			curr->prev->next = newNode;
			curr->prev = newNode;
			return newNode;
		}
	}
	return NULL;
}
