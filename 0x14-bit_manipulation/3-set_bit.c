#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (index > 64)
		return -1;

	*n |= mask;

	return 1;
}