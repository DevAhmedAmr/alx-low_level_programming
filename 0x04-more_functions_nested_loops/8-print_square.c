#include"main.h"
/**
 * print_square - function that prints  square
 * @size: print 'size' time TYPE INT
 * Description: function that prints  square
 *
 * Return: void
 *
 */
void print_square(int size)
{
	int i = 1;

	do {
		int j;

		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
		i++;
	} while (i <= size);
}

