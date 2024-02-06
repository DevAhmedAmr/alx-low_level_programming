#include "search_algos.h"
int binary_search_helper(int *array, size_t start, size_t end, int value);
int print_arr(int *arr, size_t start, size_t size);
int binary_search(int *array, size_t size, int value)
{

	return binary_search_helper(array, 0, size - 1, value);
}
int binary_search_helper(int *array, size_t start, size_t end, int value)
{
	size_t mid = (start + end) / 2;

	print_arr(array, start, end);

	if (start > end || array == NULL)
		return -1;

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
		/*[1,2,3,4,5]*/
		return binary_search_helper(array, mid + 1, end, value);
	else if (array[mid] > value)
		return binary_search_helper(array, start, mid - 1, value);

	return -1;
}

int print_arr(int *arr, size_t start, size_t size)
{
	size_t i;

	if (arr == NULL || size == 0 || start > size)
	{
		return -1;
	}

	printf("Searching in array:");

	for (i = start; i <= size; i++)
	{

		printf(" %i", arr[i]);

		if (i != size)
			printf(",");
	}
	printf("\n");
	return 0;
}