#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * @parm
 * @head: a ptr to the first node in a linked list
 *
 * Return: a ptr to the first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		*head = curr;
		curr = curr->next;
		(*head)->next = before;
		before = *head;
	}
	return (*head);
}
