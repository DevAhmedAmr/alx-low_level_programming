#include "main.h"

/**
 * _strcpy - function that copies a string
 *
 * @dest: parameter of a string wanted to be copied to
 * @src: string wanted to be copy from
 *
 * Return: dest value .
 *
 */
char *_strcpy(char *dest, char *src)

{
	int i = 0;

	for (; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
