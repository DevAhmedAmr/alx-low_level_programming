#include "main.h"
/**
 * _strcat - function that merges 2 strings
 * @dest: the orginal text
 * @src: text that want to be added
 *
 * Return: text after the merge
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	int len = _strlen(dest);

	for (i = len, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
