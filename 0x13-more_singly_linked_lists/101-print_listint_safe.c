#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stddef.h>

size_t print_listint_safe(const listint_t *head)
{
	listint_t *curr = (listint_t *)head;

	size_t count = 0;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);

		if (curr > curr->next)
		{

			count++;
			curr = curr->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);

			/*printf("(%i : %p) > (%p : %i )= %i\n", curr->n, (void *)curr,*/
			/* (void *)curr->next, curr->next->n, curr > curr->next);*/
			count++;
			break;
		}
	}

	return count;
}
