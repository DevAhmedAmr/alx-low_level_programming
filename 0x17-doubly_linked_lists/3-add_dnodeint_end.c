#include "lists.h"
dlistint_t *_add_head(dlistint_t **head, int n);
/**
 * add_dnodeint_end - a  function that adds a new node at
 * the end of a dlistint_t list.
 *
 * @param
 * @head: the head of linked list that wanted an element to be added in
 * @n: element to be added in the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *new_Node;
	dlistint_t *last_node;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
		return (_add_head(head, n));

	while (curr != NULL)
	{
		if (curr->next == NULL)
			last_node = curr;
		curr = curr->next;
	}

	new_Node = malloc(sizeof(dlistint_t) * 1);

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;
	new_Node->prev = last_node;
	last_node->next = new_Node;
	return (new_Node);
}

/**
 * _add_head - a  function that adds a new node
 * as the new head for a linked list
 *
 * @param
 * @head: a null pointer to an empty list
 * @n: element to be added in the linked list as the new head
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *_add_head(dlistint_t **head, int n)
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
