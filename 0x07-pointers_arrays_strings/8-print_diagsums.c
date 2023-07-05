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
	int i = 0;

	int leftDiagonals = 0, isLeftDiagonal;

	int rightDiagonals = 0, isRightDiagonal;

	for (; i < size * size; i++)
	{
		isLeftDiagonal = i % (size + 1) == 0;

		isRightDiagonal = i % (size - 1) == 0;

		if (isLeftDiagonal)
			leftDiagonals += *(a + i);

		if (isRightDiagonal &&
				i != 0 &&
				i != (size * size) - 1)
			rightDiagonals += *(a + i);
	}
	printf("%i, %i\n", leftDiagonals, rightDiagonals);
}
