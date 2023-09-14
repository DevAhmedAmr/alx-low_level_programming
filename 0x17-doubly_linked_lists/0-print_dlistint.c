#include <stdio.h>
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t n = 0;
	while (curr != NULL)
	{
		printf("%i\n", curr->n);
		curr = curr->next;
		n++;
	}
	return n;
}