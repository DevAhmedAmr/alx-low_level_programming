#include <stdlib.h>
int **alloc_grid(int width, int height)
{
    int i, j;
    int **arr;
    arr = malloc(height * sizeof(int *));
    for (i = 0; i < height; i++)
    {
        arr[i] = malloc(height * sizeof(int *));
    }
    for (
        i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            arr[i][j] = 0;
        }
    }

    return arr;
}
