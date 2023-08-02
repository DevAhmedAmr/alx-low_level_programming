#include<stdlib.h>
/**
 * _calloc - my own calloc function in c that allcoate memroy and set it to 0
 *
 * parameters:
 * @nmemb: number of elements to be allocated
 * @size: size of the element (if int 4 bytes , char 1 byte, etc.. )
 *
 * Return: a pointer to the  address of the allocated memory
 */

void *_calloc(size_t nmemb, size_t size)
{
	size_t i;

	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *)p)[i] = 0;

	return (p);
}
