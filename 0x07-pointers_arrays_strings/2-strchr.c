#include <stddef.h>
/**
 * _strchr - function
 * @s: variable
 * @c: variable
 * Return: ptr
 */
char *_strchr(char *s, char c)
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    while (*s != '\0')
    {
        if (*(s) == c)
            return (s);

        s++;
    }

    if (*(s) == c)
        return (s);

    return NULL;
}
