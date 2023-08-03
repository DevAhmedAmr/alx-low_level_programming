#include "main.h"
/**
 * print_binary -  function that prints the binary
 * representation of a number using bit wise manipulation.
 *
 * @n: number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int numCpy = n;
	int len = 0;

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
		unsigned long int division = (numCpy >> len);

		if ((division & 1) == 1)
		{
			_putchar((division & 1) + 48);
		}

		if ((division & 1) == 0)
		{
			_putchar((division & 1) + 48);
		}

		len--;
	}
}
