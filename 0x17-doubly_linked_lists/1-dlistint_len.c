#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 *
 * @param
 * @h: a node to the head of the linked list
 *
 * Return: the length of the linked list
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t n = 0;

	while (curr != NULL)
	{
		curr = curr->next;
		n++;
	}
	return (n);
}
