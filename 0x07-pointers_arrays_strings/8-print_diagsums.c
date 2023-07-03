#include <stdio.h>
void print_diagsums(int *a, int size)
{
    int i, j;
    unsigned long rightDiagonals = 0, leftDiagonals = 0;
    int (*p)[size] = (int(*)[size])a;

    for (i = 0, j = 0; i < size; i++, j++)
    {
        rightDiagonals += p[i][j];
    }

    for (i = 0, j = size - 1; i < size; i++, j--)
    {
        leftDiagonals += p[i][j];
    }

    printf("%lu, %lu\n", rightDiagonals, leftDiagonals);
}

