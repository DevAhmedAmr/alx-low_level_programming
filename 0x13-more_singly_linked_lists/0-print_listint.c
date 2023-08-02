#include "lists.h"
/**
 * print_listint -  function that prints all the elements of a listint_t list.
 *
 * @parameters:
 * @h: a ptr to first node of a linked list
 *
 * Return: size of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *curr = (listint_t *)h;

	while (curr != NULL)
	{
		printf("%i\n", (curr)->n);
		count++;
		curr = curr->next;
	}
	return (count);
}
