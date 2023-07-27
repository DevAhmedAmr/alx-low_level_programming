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
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free(head->str);

		free(head);

		head = temp;
	}
}
