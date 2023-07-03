#include <stdio.h>
char *_strchr(char *s, char c)
{
    while (*s != c)
        s++;
    if (*s == c)
	    return s;
       return NULL;

}
