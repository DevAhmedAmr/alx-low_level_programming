#include "main.h"

/**
 * _strncpy - function that copies a string to another empty string
 * @dest: string paramter that will the copied text save in
 * @src: text string to be copied
 * @n: number of chars to be copied from src
 *
 * Return: dest var
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
