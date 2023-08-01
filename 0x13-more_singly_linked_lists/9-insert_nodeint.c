#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node
 * at a given position index.
 *
 * @head: the first element in the linked list
 * @idx: The position where we want to insert the new element
 * @n: number to be inserted
 *
 * Return: a pointer to the new element in the linked list
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *before, *newNode = malloc(sizeof(listint_t));
	unsigned int index = 0, insert_in_indx_0 = idx <= 0;

	if (newNode == NULL)
		return (NULL);

	curr = *head;

	do {
		int isLastIndex = (idx == 1 + index && curr->next == NULL);

		if (index + 1 == idx)
			before = curr;

		if (idx == index || isLastIndex)
		{
			newNode->n = n;
			if (insert_in_indx_0)
			{
				newNode->next = *head;
				*head = newNode;
			}
			else
				before->next = newNode;

			if (isLastIndex)

				newNode->next = NULL;
			else
				newNode->next = curr;

			return (newNode);
		}
		else
			index++;
		curr = curr->next;
	} while (curr != NULL);

	return (NULL); /*return NULL if idx > list len*/
}
