#include "lists.h"
/**
 * free_listint_safe -  function that frees a listint_t list.
 * This function can free lists with a loop
 *
 * @param:
 * @h: pointer to the address of the head node of a linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t list_len = 0;

	listint_t *curr, *next;

	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		if (curr > next)
		{
			free(curr);
			curr = next;
			list_len++;
		}
		else
		{
			free(curr);
			list_len++;
			break;
		}
	}
	*h = NULL;
	return (list_len);
}
