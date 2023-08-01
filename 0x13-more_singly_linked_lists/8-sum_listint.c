#include "lists.h"
/**
 * sum_listint - a  function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @parameters:
 * @head: pointer to the first node in the linked list
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *curr;

	if (head == NULL)
		return (0);

	curr = head;

	while (curr != NULL)
	{
		total_sum += curr->n;

		curr = curr->next;
	}

	return (total_sum);
}