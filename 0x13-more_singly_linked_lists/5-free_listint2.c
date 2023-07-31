#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * The function sets the head to NULL
 * @param:
 * @head: ptr to the list to be freed from the memory
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	while ((*head) != NULL)
	{
		next = (*head)->next;
		free(*head);
		(*head) = next;
	}
	*head = NULL;
}
