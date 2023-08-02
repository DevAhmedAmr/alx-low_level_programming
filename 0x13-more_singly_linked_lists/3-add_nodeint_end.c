#include "lists.h"
/**
 * add_nodeint_end - Write a function that adds a new node
 * at the end of a listint_t list.
 *
 * @param:
 * @head: ptr to the linked list
 * @n: number to be addes to the linked list
 *
 * Return: ptr to the new added element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		listint_t *curr = *head;

		while (curr->next != NULL)
			curr = curr->next;

		curr->next = newNode;
	}
	return (newNode);
}
