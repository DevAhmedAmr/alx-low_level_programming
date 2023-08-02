#include<stdio.h>
/**
 * print_array - function that print arr elemnts
 *
 * @a: array
 * @n: number of elemnts
 * return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
