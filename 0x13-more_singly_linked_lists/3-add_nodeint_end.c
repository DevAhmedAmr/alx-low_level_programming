#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		listint_t *tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newNode;
	}
	return newNode;
}