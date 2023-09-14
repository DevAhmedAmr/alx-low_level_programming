#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 *
 * @h: a pointer to the node
 * @idx: given index
 * @n: number to be add to the list
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	unsigned int i = 0;
	int insert_in_beginning = idx == 0;

	if (insert_in_beginning)
		return (add_dnodeint(h, n));

	for (; curr; curr = curr->next, i++)
	{
		int insert_in_last = curr->next == NULL && i + 1 == idx;

		if (insert_in_last)
			return (add_dnodeint_end(h, n));

		if (i == idx)
		{
			dlistint_t *newNode = malloc(sizeof(dlistint_t));

			newNode->n = n;
			newNode->next = curr;
			newNode->prev = curr->prev;

			curr->prev->next = newNode;
			curr->prev = newNode;
			return (newNode);
		}
	}
	return (NULL);
}
