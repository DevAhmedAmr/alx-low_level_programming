#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns
 * the nth node of a listint_t linked list.
 *
 * @parameters:
 * @head: a pointer to the node
 * @index: the (n)th node of a listint_t linked list to be return
 *
 * Return: the (n)th node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned idx = 0;

	listint_t *curr;

	if (head == NULL)
		return (NULL);

	curr = head;

	while (curr != NULL)
	{
		if (idx < index)
		{
			idx++;
			curr = curr->next;
		}

		else if (index == idx)
			return curr;

		else
			return (NULL);
	}
	return (NULL);
}
