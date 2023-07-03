#include <stdio.h>
#include <stdio.h>

void print_diagsums(int* a, int size)
{
	int i;
	unsigned long rightDiagonals = 0, leftDiagonals = 0;

	for (i = 0; i < size; i++)
	{
		rightDiagonals += a[i * size + i];
		leftDiagonals += a[i * size + (size - 1 - i)];
	}

	printf("%lu, %lu\n", rightDiagonals, leftDiagonals);
}

