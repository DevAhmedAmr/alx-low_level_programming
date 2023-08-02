#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 *
 * @param:
 * @head: ptr to the list to be freed from the memory
 *
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
