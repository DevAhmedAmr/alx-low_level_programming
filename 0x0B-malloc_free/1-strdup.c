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

char *_strdup(char *str)
{
	int i;

	int strLen;

	char *strCpy;

    if (str == NULL)
    {
        return NULL;
    }

    strCpy = malloc((strLen) * sizeof(char));
    strLen = strlen(str);


    if (strCpy == NULL)
    {
        return NULL;
    }

    if (strCpy == NULL)
    {
        return NULL;
    }
    for (i = 0; i < strLen; i++)
    {
        strCpy[i] = str[i];
    }
    strCpy[strLen] = '\0';
    return strCpy;
}
