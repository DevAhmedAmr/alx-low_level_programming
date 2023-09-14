#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *new_Node;
	dlistint_t *last_node;

	if (*head == NULL)
	{
		curr = malloc(sizeof(dlistint_t) * 1);
		curr->n = n;
		curr->next = NULL;
		curr->prev = NULL;
		*head = curr;

		return curr;
	}

	while (curr != NULL)
	{
		if (curr->next == NULL)
			last_node = curr;
		curr = curr->next;
	}

	new_Node = last_node->next;

	new_Node = malloc(sizeof(dlistint_t) * 1);
	new_Node->n = n;
	new_Node->next = NULL;
	new_Node->prev = last_node;

	last_node->next = new_Node;

	return new_Node;
}
