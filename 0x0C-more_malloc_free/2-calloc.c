#include<stdlib.h>
void *_calloc(size_t nmemb, size_t size)
{
	size_t i;

	char *p;
	if (size == 0 || nmemb == 0)	
		return NULL;

	p = malloc(nmemb * size);

	if(p == NULL)
		return 0;

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return p;
}
