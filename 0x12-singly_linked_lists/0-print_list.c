#include "lists.h"
size_t print_list(const list_t *h)
{
	printf("[%u] %s\n", h->len, h->str);
	return h->len;
}