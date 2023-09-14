#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @param
 * @head: a node to a linked list
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr)
	{
		sum += curr->n;

		curr = curr->next;
	}
	return (sum);
}
