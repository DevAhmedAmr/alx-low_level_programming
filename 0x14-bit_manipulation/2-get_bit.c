#include "main.h"
/**
 * get_bit -  function that returns the value of a bit
 * at a given index.
 *
 * @param
 * @index: to be returned
 * @n: number that want to return index at
 *
 * Return:  the value of a bit
 * at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	while (index < 64)
	{
		if (count == index)
		{
			return (n & 1);
		}
		n >>= 1;

		count++;
	}
	return (-1);
}
