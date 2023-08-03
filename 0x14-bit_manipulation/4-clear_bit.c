#include "main.h"
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask = (1u << *n) - 1u;
	bitmask &= ~(1u << index);
}