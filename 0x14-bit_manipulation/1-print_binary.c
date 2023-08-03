#include "main.h"
#define mod &1

void print_binary(unsigned long int n)
{
	unsigned int numCpy = n;
	int len = 0;
	int seenOne = 0;

	/*binary len -1*/

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	while (n >> 1 > 0)
	{
		n >>= 1;
		len++;
	}

	while (len >= 0)
	{
		unsigned int division = (numCpy >> len);

		if ((division & 1) == 1)
		{
			_putchar((division & 1) + 48);
			seenOne = 1;
		}

		if ((division & 1) == 0 && seenOne == 1)
		{
			_putchar((division & 1) + 48);
		}

		len--;
	}
}
