#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t const *curr;
	listint_t const **ptr_curr = &curr;
	*ptr_curr = h;

	curr = h;
	while (*ptr_curr != NULL)
	{
		printf("%i\n", (*ptr_curr)->n);
		count++;
		*ptr_curr = (*ptr_curr)->next;
	}
	return count;
}
