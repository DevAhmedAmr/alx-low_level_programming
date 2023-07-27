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
 * Returns:
 * On success, returns a pointer to the newly added node.
 * On failure (memory allocation or empty input string),
 * returns NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *strCpy;

	int len;

	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	strCpy = strdup(str);

	if (strCpy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = strCpy;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
