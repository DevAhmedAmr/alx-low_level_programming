#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: pointer to a linked listed to be deleted
 * @index: the index to be deleted
 *
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;

	if (index == 0)
	{
		tmp = curr;

		if (curr->next)
			curr->next->prev = NULL;

		*head = curr->next;
		free(tmp);
		return (1);
	}
	for (; curr; curr = curr->next, i++)
	{
		if ((curr->next == NULL) && (i == index))
		{
			tmp = curr;
			curr->prev->next = NULL;
			free(tmp);
			return (1);
		}
		if (i == index)
		{
			tmp = curr;
			curr->next->prev = curr->prev;
			curr->prev->next = curr->next;

			free(tmp);
			return (1);
		}
	}
	return (-1);
}
