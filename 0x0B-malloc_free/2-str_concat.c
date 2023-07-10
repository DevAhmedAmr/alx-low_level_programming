#include"stdlib.h"
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

char *str_concat(char *s1, char *s2)
{
    int i, j;

    int len = _strlen(s1) + _strlen(s2) + 1;

    char *str = malloc(len * sizeof(char));

    for (i = 0; i < _strlen(s1); i++)
    {
        if (s1[i] != '\0')
        {
            str[i] = s1[i];
        }
    }

    i = 0;

    for (j = _strlen(s1); j < len; j++)
    {

        if (s2[i] != '\0')
        {
            str[j] = s2[i];

            i++;
        }
    }

    return str;
}
