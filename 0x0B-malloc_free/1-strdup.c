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
    if (str == NULL)
    {
        return NULL;
    }

    int i;
    int strLen =_strlen(str);
    char *strCpy = malloc((strLen) * sizeof(char)); /* Allocate memory for the null-terminator as well*/
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
