#include"stdlib.h"
/**
 * create_array - function that creates an array of a given char
 *
 * parameters:
 * @size: size of the array that is wanted to be inizialized
 * @c: that char we want in the arry
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arry;

	if (size == 0)
		return (NULL);

	arry = malloc(sizeof(char) * size);

	if (arry == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arry[i] = c;
	}

	return (arry);
}
