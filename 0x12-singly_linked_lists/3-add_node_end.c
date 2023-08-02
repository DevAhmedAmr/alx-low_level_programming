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
	list_t *new = malloc(sizeof(list_t));
	char *dup = malloc(sizeof(char) * strlen(str) + 1);

	if (new == NULL || dup == NULL)
	{
		if (new != NULL)
			free(new);

		if (dup != NULL)
			free(new);

		return (NULL);
	}

	dup = strcpy(dup, str);

	new->str = dup;

	new->len = strlen(str);

	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new;
	}

	return (new);
}
