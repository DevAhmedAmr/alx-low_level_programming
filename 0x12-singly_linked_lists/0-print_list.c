#include "lists.h"
size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%lu] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n", h->len);
		count++;
		h = h->next;
	}

	return count;
}