#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *before, *newNode = malloc(sizeof(listint_t));
	unsigned int index = 0, isListEmpty = curr == NULL && idx == 0;

	if (newNode == NULL)
		return NULL;

	curr = *head;

	do
	{
		int isLastIndex = (idx == 1 + index && curr->next == NULL);

		if (index + 1 == idx)
			before = curr;

		if (idx == index || isLastIndex)
		{

			newNode->n = n;
			if (idx <= 0) /*if it's wanted to be inserted in head*/
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

			return newNode;
		}
		else
			index++;
		curr = curr->next;
	} while (curr != NULL);

	return NULL;
}
