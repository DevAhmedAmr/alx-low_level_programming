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
 * string_toupper - function converts small letters to capital letters
 * @a: string that wanted to be changed
 *
 * Return: a (string after the convertion)
 */
char *string_toupper(char *a)
{
	int j, i, charAsciCode;

	for (i = 0; i < _strlen(a); i++)
	{
		for (j = 'a'; j < 'z'; j++)
		{
			charAsciCode = (int)a[i];
			if (charAsciCode == (int)j)
			{
				a[i] -= 32;
			}
		}
	}
	return (a);
}
