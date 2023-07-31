#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr;
	listint_t *before;
	listint_t *newNode = malloc(sizeof(listint_t));

	unsigned int index = 0;
	curr = *head;

	while (curr != NULL)
	{
		int isLastIndex = (idx == 1 + index && curr->next == NULL);

		if (index + 1 == idx)
			before = curr;

		if (idx == index || isLastIndex)
		{

			newNode->n = n;
			if (idx > 0)

				before->next = newNode;

			else
			{
				newNode->next = *head;
				*head = newNode;
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
