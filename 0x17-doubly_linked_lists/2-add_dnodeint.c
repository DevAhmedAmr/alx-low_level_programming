#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list..
 *
 * @head: a  pointer to a linked list
 * @n: element to be added in the linked list at the beginning
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_head(dlistint_t **head, int n);

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *new_Node;

	if (head == NULL)
	{
		return NULL;
	}

	if (*head == NULL)
		return (add_head(head, n));

	new_Node = malloc(sizeof(dlistint_t) * 1);

	if (new_Node == NULL)
		return NULL;

	new_Node->n = n;
	new_Node->next = curr;
	new_Node->prev = NULL;

	*head = new_Node;

	return new_Node;
}
/**
 * add_head - a  function that adds a new node
 * as the new head for a linked list
 *
 * @param
 * @head: a null pointer to an empty list
 * @n: element to be added in the linked list as the new head
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_head(dlistint_t **head, int n)
{
	dlistint_t *curr = malloc(sizeof(dlistint_t) * 1);

	if (curr == NULL)
		return (NULL);

	curr->n = n;
	curr->next = NULL;
	curr->prev = NULL;
	*head = curr;
	return (curr);
}
