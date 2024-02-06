#include "search_algos.h"
int binary_search_helper(int *array, size_t start, size_t end, int value);
int print_arr(int *arr, size_t start, size_t size);
int binary_search(int *array, size_t size, int value)
{

	return binary_search_helper(array, 0, size - 1, value);
}
/**
 * binary_search_helper - a function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 *
 * @params
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be found
 *
 * Return: If value is not present in array or if array is NULL, return -1
 * else return the index of the value
 */
int binary_search_helper(int *array, size_t start, size_t end, int value)
{
	size_t mid = (start + end) / 2;

	print_arr(array, start, end);

	if (start > end || array == NULL)
		return (-1);

	if (array[mid] == value)
		return (mid);

	else if (array[mid] < value)
		return (binary_search_helper(array, mid + 1, end, value));

	else if (array[mid] > value)
		return (binary_search_helper(array, start, mid - 1, value));

	return (-1);
}
/**
 * print_arr - a function that print the array

 * * @params
 * @array: array to be printed
 * @start: start of the array
 * @end:
 *
 * Return: If value is not present in array or if array is NULL, return -1
 * else return the index of the value
 */
int print_arr(int *arr, size_t start, size_t end)
{
	size_t i;

	if (arr == NULL || end == 0 || start > end)
	{
		return -1;
	}

	printf("Searching in array:");

	for (i = start; i <= end; i++)
	{

		printf(" %i", arr[i]);

		if (i != end)
			printf(",");
	}
	printf("\n");
	return 0;
}