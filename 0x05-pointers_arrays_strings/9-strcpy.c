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
 * _strcpy - function that copies a string
 *
 * @dest: parameter of a string wanted to be copied to
 * @src: string wanted to be copy from
 *
 * return: dest value .
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
