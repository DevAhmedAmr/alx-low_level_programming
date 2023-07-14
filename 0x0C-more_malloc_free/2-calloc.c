#include<stdlib.h>

void *_calloc(size_t nmemb, size_t size)
{
	size_t i;

	void *p;

	if (size == 0 || nmemb == 0)	
		return (NULL);

	p = malloc(nmemb * size);

	if(p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((int)p)[i] = 0;

	return (p);
}
