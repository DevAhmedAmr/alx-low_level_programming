#include<stdlib.h>
void *_calloc(size_t nmemb, size_t size)
{
	size_t i;

	char *p = malloc(nmemb * size);

	if (p == NULL || size == 0 || nmemb == 0)
		return NULL;

	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return p;
}
