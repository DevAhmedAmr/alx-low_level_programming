#include "main.h"
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask = 1UL << index;
	if (index > 64)
	{
		return -1;
	}

	*n &= ~bitmask;
	return 1;
}