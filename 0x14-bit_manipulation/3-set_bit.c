#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned int mask = 1 << index;

	*n |= mask;

	if (index > 64)
		return -1;

	return 1;
}