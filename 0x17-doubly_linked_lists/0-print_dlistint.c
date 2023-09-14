#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints a element of n of a linked list
 *
 * @param
 * @h: a node to the head of the linked list
 *
 * Return: the length of the linked list
 *
 */

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
	return (n);
}
