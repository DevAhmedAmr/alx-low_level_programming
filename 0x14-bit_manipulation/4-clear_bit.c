#include "main.h"
/**
 * clear_bit - function that clear a bit in a given index
 *
 * @param
 * @n: number to be cleared
 * @index: index to be cleared
 *
 * Return: 1 if success , 0 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask = 1 << index;

	if (index > 64)
	{
		return (-1);
	}

	*n &= ~bitmask;
	return (1);
}
