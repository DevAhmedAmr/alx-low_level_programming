#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * at a given index.
 *
 * @param:
 * @n: number to be returned form
 * @index: index to be returned
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (index > 64)
		return (-1);

	*n |= mask;

	return (1);
}
