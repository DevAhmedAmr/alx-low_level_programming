#include "main.h"
#define mod &1

void print_binary(unsigned long int n)
{
	unsigned int numCpy = n;
	int count = 0;

	/*binary len -1*/

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (n >> 1)
	{
		n >>= 1;
		count++;
	}

	while (count >= 0)
	{
		int division = (numCpy >> count);

		_putchar((division & 1) + 48);

		count--;
	}
}
