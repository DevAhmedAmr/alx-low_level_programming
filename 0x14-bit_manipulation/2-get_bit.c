#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	while (index < 64)
	{
		if (count == index)
		{
			return n & 1;
		}
		n >>= 1;

		count++;
	}
	return -1;
}