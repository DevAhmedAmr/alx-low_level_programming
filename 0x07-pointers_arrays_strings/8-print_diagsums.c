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
	int i;

	int rightDiagonals = 0, leftDiagonals = 0;

	for (i = 0; i < size; i++)
	{
		rightDiagonals += a[i * size + i];
		leftDiagonals += a[i * size + (size - 1 - i)];
	}

	printf("%i, %i\n", rightDiagonals, leftDiagonals);
}
