#include "lists.h"

int hasAloop(listint_t *head);

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *curr = (listint_t *)head;

	if (hasAloop(curr) == 1)
	{
		printf("-> [%p] %i\n", (void *)curr, curr->n);
		return 0;
	}

	while (curr != NULL)
	{
		printf("[%p] %i\n", (void *)curr, curr->n);
		count++;
		curr = curr->next;
	}

	return count;
}

int hasAloop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
			return 1;
	}

	return 0;
}
