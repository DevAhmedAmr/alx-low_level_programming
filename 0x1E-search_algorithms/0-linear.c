#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @params
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be found
 *
 * Return: If value is not present in array or if array is NULL, return -1
 * else return the index of the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
