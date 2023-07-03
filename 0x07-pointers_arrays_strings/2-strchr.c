#include <stddef.h>
char *_strchr(char *s, char c)
{
    while (*s != c)
        s++;

    if (s == '\0')
        return NULL;

    return s;
}
