#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in array
 * 
 * parameters:
 * @size:

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for ( i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
		{
			return i;
		}
	}
	return (-1);
}
