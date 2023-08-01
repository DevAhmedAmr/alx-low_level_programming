#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *slow = (listint_t *)head;
	listint_t *fast = (listint_t *)head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("[%p] %i\n", (void *)slow, slow->n);
		count++;

		if (slow == fast)
		{
			printf("-> [%p] %i\n", (void *)fast, fast->n);
			break;
		}
	}

	return count;
}
