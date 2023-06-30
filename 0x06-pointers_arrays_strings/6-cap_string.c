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
 * cap_string - function apitalizes all words of a string.
 *
 * Return: void 
 */
char *cap_string(char *str)
{
    char Separators[] = {'\t', '\n', ' ', ',', ';', '!',
                         '.', '?', '\"', '(', ')', '{', '}'};
    int i = 0, j;
    while (i < _strlen(str) && str[i] != '\0')
    {
        for (j = 0; j < 14; j++)
        {

            if (str[i - 1] == Separators[j] && (int)str[i] < 123 && (int)str[i] > 96)

            {
                str[i] = (int)str[i] - 32;
            }
        }
        i++;
    }
    return str;
}
