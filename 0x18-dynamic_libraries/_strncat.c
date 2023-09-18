#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: text that wanted to be coiped to
 * @src: text that wanted to be copied
 * @n: maximum  length to be copied from (src) variable
 *
 * Return: dest after the edition
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	int len = _strlen(dest) + (_strlen(src));

	if (n > len)
		n = len;
	for (i = _strlen(dest), j = 0; i < len && j < n; i++, j++)
		dest[i] = src[j];
	return (dest);
}
