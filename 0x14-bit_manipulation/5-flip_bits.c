#include "main.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;
	if (n == 0 && m == 0)
	{
		return 0;
	}

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}

	return count;
}
