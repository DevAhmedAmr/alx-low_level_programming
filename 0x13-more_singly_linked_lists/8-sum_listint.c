#include "lists.h"
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *curr;

	if (head == NULL)
		return 0;

	curr = head;

	while (curr != NULL)
	{
		total_sum += curr->n;

		curr = curr->next;
	}

	return total_sum;
}