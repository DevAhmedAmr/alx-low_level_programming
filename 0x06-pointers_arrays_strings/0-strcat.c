#include"main.h"
/**
 * _strlen -  a function that returns the length of a string.
 *
 * @s: type str
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
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
	dest[_strlen(dest)] = '\0';
	return (dest);
}

