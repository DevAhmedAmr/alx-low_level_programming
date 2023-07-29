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
	int len = strlen(str);
	char *strCpy = malloc(len + 1 * sizeof(char));
	if (new == NULL || strCpy == NULL)
	{
		if (new != NULL)
			free(new);

		if (strCpy != NULL)
			free(new);

		return (NULL);
	}

	new->len = len;
	strCpy = strcpy(strCpy, str);
	new->str = strCpy;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{

		list_t *tmp_node = *head;

		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		new->next = NULL;

		tmp_node->next = new;
	}
	return (new);
}
