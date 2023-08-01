#include "lists.h"

int hasAloop(listint_t *head);

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	listint_t *curr = (listint_t *)head;

	listint_t *loop_Check = (listint_t *)head;

	hasAloop(loop_Check);

	while (curr != NULL)
	{
		printf("[%p] %i\n", &curr->next, curr->n);

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
			exit(98);
	}
	return 1;
}
