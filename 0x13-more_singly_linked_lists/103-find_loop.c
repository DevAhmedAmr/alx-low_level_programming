#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr = head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;

		if (curr > next)
		{
			printf(">>>>>>>>>>> %p %p\n", (void *)curr, (void *)next);

			curr = next;
		}
		else
			return curr;
	}
	return NULL;
}