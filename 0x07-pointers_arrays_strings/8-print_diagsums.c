#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int i, j;

    unsigned long rightDiagonals = 0, leftDiagonals = 0;

    for (i = 0; i < size; i++)
    {
        for (j = i; j < i + 1; j++)
        {
            rightDiagonals += *(a + i * size + j);
        }
    }

    for (i = 0, j = size - 1; i < size; i++, j--)
    {
        leftDiagonals += *(a + i * size + j);
    }

    printf("%lu, %lu\n", rightDiagonals, leftDiagonals);
}

