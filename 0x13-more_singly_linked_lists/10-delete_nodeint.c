#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 *  of a listint_t linked list.
 *
 * @param
 *
 * @head: pointer to a pointer for the first node in the linked list
 * @index: index of the element to be removed
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *curr;

	curr = *head;

	if (head == NULL)
		return (-1);

	while (curr != NULL)
	{
		listint_t *before;

		if (idx + 1 == index)
			before = curr;

		if (idx == index)
		{
			listint_t *next = curr->next;

			free(curr);
			curr = next;

			if (index >= 1)
				before->next = curr;

			else
				*head = curr;

			return (1);
		}
		else if (idx < index)
		{
			curr = curr->next;
			idx++;
		}
	}
	return (-1);
}
