#include <stdlib.h>
int **alloc_grid(int width, int height)
{
    int i, j, k;
    int **arr;
    arr = malloc(height * sizeof(int *));

    if (height <= 0 || width <= 0)
    {
        return NULL;
    }

    if (arr == NULL)
        return NULL;

    for (i = 0; i < height; i++)
    {
        arr[i] = malloc(width * sizeof(int));
        if (arr[i] == NULL)
        {
            for (k = 0; k <= i; k++)
            {
                free(arr[k]);
            }

            free(arr);
            return NULL;
        }
    }

    /*                                                     */
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
