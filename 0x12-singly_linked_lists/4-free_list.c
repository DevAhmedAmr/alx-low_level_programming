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
	/*https://www.youtube.com/watch?v=ld8xjJ3j-eY*/
	list_t *next = head->next;

	if (head == NULL)
		return;

	free(head->str);

	free(head);

	head = next;

	if (head != NULL)
		free_list(next);
}
