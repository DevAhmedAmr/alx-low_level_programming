#include "lists.h"
/**
 * add_node - Adds a new node that has  a copy of the  string at
 * the beginning of the linked list.
 *
 * Parameters:
 *
 *  @head: A pointer to a pointer to the head of the linked list.
 *  @str: The input string to be copied to the new node.
 *
 * Return:
 * On success, returns a pointer to the newly added node.
 * On failure (memory allocation or empty input string),
 * returns NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;

	list_t *new;

	new = malloc(sizeof(list_t));
	dup = malloc(sizeof(char) * strlen(str) + 1);

	if (new == NULL || dup == NULL)
		return NULL;

	dup = strcpy(dup, str);

	new->str = dup;

	new->len = strlen(str);

	new->next = *head;

	*head = new;

	return new;
}
