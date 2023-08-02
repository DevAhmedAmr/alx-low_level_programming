#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
 * _strdup - function that duplicates a string
 *
 * paramters:
 * @str: string to be copied
 *
 * Return: a copy of the string
 */
char *_strdup(char *str)
{
	int i;
	int strLen;
	char *strCpy;

	if (str == NULL)
	{
		return (NULL);
	}

	strLen = _strlen(str);
	strCpy = malloc((strLen + 1) * sizeof(char));
	if (strCpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strLen; i++)
	{
		strCpy[i] = str[i];
	}

	strCpy[strLen] = '\0';
	return (strCpy);
}

