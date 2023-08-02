#include "function_pointers.h"

/**
 * int_index - function that searches for the first integer in array to meet
 * a requirement
 *
 * parameters:
 * @size: size of the arr
 * @array: the array to be searched
 * @cmp: pointer to a function that searches
 * with the poistive or absolute value
 *
 * Return: index of the element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
			return (i);
	}
	return (-1);
}
