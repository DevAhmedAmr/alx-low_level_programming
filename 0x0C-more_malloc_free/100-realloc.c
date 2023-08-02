#include<stdlib.h>
/**
 * _realloc - my own function that reallocates a memory block
 * using malloc and free
 *
 * parameters:
 * @ptr: Pointer to the memory block to be reallocated
 * @old_size: Old size of the memory block that wanted to be reallocated
 * @new_size: New size of the memory block that wanted to be reallocated
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrCpy;

	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptrCpy = malloc(new_size * sizeof(char));

		if (ptrCpy == NULL)
			return (NULL);

		return (ptrCpy);
	}

	ptrCpy = malloc(new_size * sizeof(char));

	if (ptrCpy == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		((char *)ptrCpy)[i] = ((char *)ptr)[i];

	free(ptr);
	return (ptrCpy);
}

