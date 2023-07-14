#include<stdlib.h>
/**
 * array_range - function that creates an array of integers from min to max num
 *
 * parameters:
 * @min: minimum number to be in the arr
 * @max: maximum number to be in the arr
 *
 * Return: a pointer to the arr
 */

int *array_range(int min, int max)
{
	int i, arr_index;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min, arr_index = 0; i <= max; i++, arr_index++)
	{
		arr[arr_index] = i;
	}

	return (arr);
}
