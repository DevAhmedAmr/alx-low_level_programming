#include "lists.h"
/**
 * listint_len - function that returns the number of elements in
 * a linked listint_t list.
 *
 * @parameters:
 * @h: ptr to the linked list
 *
 * Return: size of the linked list
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	listint_t *curr = (listint_t *)h;

	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}
	return (len);
}
