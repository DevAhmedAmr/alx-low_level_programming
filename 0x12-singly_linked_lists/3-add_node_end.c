#include "lists.h"
/**
 * add_node_end - adds in the end a new node or element
 * @head: pointer to the head of the list
 * @str: wanted string to be added
 *
 * Return: address of the new added element
 * or null on failure
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *strcpy;
	int len;
	list_t *new_node, *tail;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	strcpy = strdup(str);

	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = strcpy;

	new_node->len = len;

	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tail = *head;

		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_node;
	}

	return (*head);
}