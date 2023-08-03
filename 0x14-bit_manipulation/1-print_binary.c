#include "main.h"
void print_binary(unsigned long int n)
{
	/* left num*2^(0) */
	/* right num/2^(0) */
	/* 1000 1001*/
}
void main()
{

	int x = 100;
	int y = 100;

	printf("%i\n", x >> 1);

	while (x / 2 != 0)
	{
		x /= 2;
		printf("%i\n", x);
	}
	printf("**********************\n");
	while (y >> 1 != 0)
	{
		y = y >> 1;

		printf("%i\n", y);
	}
}