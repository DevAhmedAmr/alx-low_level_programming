#include "lists.h"
/**
 * list_len - function return the len of a linked list
 * @h: first node on the linked list
 * Return:the len of a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
