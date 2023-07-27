#include "lists.h"

#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	size_t len = strlen(str);

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return NULL;

	new_node->next = NULL;

	new_node->str = malloc(sizeof(char) * (len + 1)); // Allocate memory for the string (+1 for the null terminator)
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	// Copy the string to the newly allocated memory
	for (size_t i = 0; i < len; i++)
	{
		new_node->str[i] = str[i];
	}
	new_node->str[len] = '\0'; // Null-terminate the string

	return new_node;
}
