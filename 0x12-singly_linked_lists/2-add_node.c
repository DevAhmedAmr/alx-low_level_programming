#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *
 */

#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	size_t len = strlen(str), i;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return NULL;

	if (str == NULL)
		return NULL;

	/* Allocate memory for the string (+1 for the null terminator) */
	new_node->str = malloc(sizeof(char) * (len + 1));
	if (new_node->str == NULL)
		return NULL;

	/* Copy the string to the newly allocated memory */
	for (i = 0; i < len; i++)
	{
		new_node->str[i] = str[i];
	}
	new_node->str[len] = '\0'; /* Null-terminate the string */

	new_node->len = len;
	new_node->next = *head; /* The new node will be the last node, so set its next to NULL*/

	*head = new_node;

	return new_node;
}
