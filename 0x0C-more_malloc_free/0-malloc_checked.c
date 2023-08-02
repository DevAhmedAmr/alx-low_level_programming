#include<stdlib.h>

/**
 * malloc_checked - function that allocate memorry using malloc
 *
 * parameter:
 * @b: number of bytes to be allocated
 *
 * Return: a void pointer to the allocated memory address
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)

		exit(98);
	return (p);
}
