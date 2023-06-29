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
 * _strncpy - function that copies a string to another empty string
 * @dest: string paramter that will the copied text save in
 * @src: text string to be copied
 * @n: number of chars to be copied from src
 *
 * Return: dest var
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = _strlen(src);

	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
