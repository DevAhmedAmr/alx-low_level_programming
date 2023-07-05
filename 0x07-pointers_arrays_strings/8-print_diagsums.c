#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * parameters:
 * @a: paramter of type pointer to an intiger array
 * @size: size of the array = size * size
 * exp: 3 * 3
 *
 * Return: void;
 */
void print_diagsums(int *a, int size)
{
    int leftColom = 0;
    int rightColom = 0;
    int i;
    for ( i = 0; i < size * size; i++)
    {
        if (i % (size + 1) == 0)
        {
            leftColom += *(a + i);
        }
        if (i % (size - 1) == 0 && i != 0 && i != (size * size) - 1)
        {
            rightColom += *(a + i);
        }
    }
    printf("%i, %i\n", leftColom, rightColom);
}
