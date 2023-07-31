#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr;
	listint_t *before;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int index = 0;

	if (newNode == NULL)
		return NULL;

	curr = *head;

	if (curr == NULL && index == 0)
	{
		newNode->n = n;

		newNode->next = *head;
		*head = newNode;
		return newNode;
	}

	while (curr != NULL)
	{

		int isLastIndex = (idx == 1 + index && curr->next == NULL);

		if (index + 1 == idx)
			before = curr;

		if (idx == index || isLastIndex)
		{

			newNode->n = n;
			if (idx <= 0)
			{

				newNode->next = *head;
				*head = newNode;
			}
			else
			{
				before->next = newNode;
			}

			if (isLastIndex)

				newNode->next = NULL;
			else
				newNode->next = curr;

			break;
		}
		else
			index++;
		curr = curr->next;
	}
	return newNode;
}
