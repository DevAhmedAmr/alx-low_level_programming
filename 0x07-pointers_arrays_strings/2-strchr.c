#include <stddef.h>
/**
 * _strchr - function
 * @s: variable
 * @c: variable
 * Return: ptr
 */
char *_strchr(char *s, char c)
{

    while (*s != '\0')
    {

        if (*s == c)
            return s;
        s++;
    }

    return NULL;
}
