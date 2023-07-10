#include <stdlib.h>
/**
 * alloc_grid - function that create 2d array and assign all its values to 0
 *
 * @height: the hight of the array
 * @width: width of the arr
 *
 * Return: the arr
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **arr;

	arr = malloc(height * sizeof(int *));
	if (height <= 0 || width <= 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			/*freeing mem form previous data*/
			for (k = 0; k < i; k++)
			{
				free(arr[k]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

