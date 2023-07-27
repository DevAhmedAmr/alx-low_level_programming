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

#include <stddef.h>
#include <stdlib.h>

/*
 * Adds a new node containing a copy of the provided string at the beginning of the linked list.
 *
 * Parameters:
 *   head: A pointer to a pointer to the head of the linked list. If the linked list is empty,
 *         head will be NULL, and a new linked list will be created.
 *   str: The input string to be copied to the new node.
 *
 * Returns:
 *   On success, returns a pointer to the newly added node. On failure (memory allocation or empty input string),
 *   returns NULL.
 */
/*
 * Adds a new node to the head of a linked list.
 *
 * head - Pointer to the head pointer of the list
 * str - String to copy into the new node
 *
 * Returns a pointer to the new node, or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{

	/* Check for invalid inputs */
	if (str == NULL)
	{
		/* Return NULL to indicate null input string */
		return NULL;
	}

	/* Calculate the length of the input string without relying on strlen */
	size_t len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len == 0)
	{
		/* Return NULL to indicate empty input string */
		return NULL;
	}

	/* Allocate memory for a new list_t node */
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		/* Memory allocation failure, return NULL */
		return NULL;
	}

	/* Allocate memory for the string (+1 for the null terminator) */
	new_node->str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_node->str == NULL)
	{
		/* Memory allocation failure, clean up and return NULL */
		free(new_node);
		return NULL;
	}

	/* Copy the string to the newly allocated memory */
	for (size_t i = 0; i < len; i++)
	{
		new_node->str[i] = str[i];
	}
	new_node->str[len] = '\0'; /* Null-terminate the string */

	new_node->len = len; /* Store the length of the string */

	if (*head == NULL)
	{
		/* If the head is NULL, create a new linked list */
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		/* The new node will be the first node, so set its next to the current head */
		new_node->next = *head;
		*head = new_node;
	}

	return new_node; /* Return the pointer to the newly added node */
}