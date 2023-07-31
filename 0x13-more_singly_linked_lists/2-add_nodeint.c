#include "lists.h"
/**
 * add_nodeint - unction that adds a new node at
 * the beginning of a listint_t list.
 *
 * @param:
 * @head: pointer to the address if the head of the linked list
 * @n: the value of n that wanted to be added
 *
 * Return: ptr to the new added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
