#include <stddef.h>
/**
 * array_iterator - function that iterate an array based on
 * the ("action" pointer to function)
 *
 * parameters:
 * @array: array to be iterated
 * @size: size of the array
 * @action: pointer to function that will perfrom action on the array element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
