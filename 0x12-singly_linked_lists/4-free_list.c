#include "lists.h"

/**
 * free_list - function that Frees a linked list
 *
 * @head: A pointer to the head of the linked list
 *
 * Return: void
 *
 */

void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->next);
		head = head->next;
	}
	free(head);
}
