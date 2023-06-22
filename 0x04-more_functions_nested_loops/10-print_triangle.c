#include"main.h"
/**
 * print_triangle - Write a function that prints a triangle,
 *  followed by a new line.
 * 
 * return: 0
 */
void print_triangle(int size)
{
    int i;

    for (i = 1; i <= size; i++)
    {
        int j;

        for (j = i; j < size; j++)
        {
            _putchar(' ');
        }
        int k;

        for (k = 1; k <= i; k++)
        {
		_putchar('#');
        }

        _putchar('\n');
    }
}
