#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that takes a pointer to an another fuction and
 * excute it
 *
 * parameters:
 * @name: name to be printed
 * @f: pointer to function to be excuted
 *
 * Return: void
 */
int _strcmp(const char* str1, const char* str2)
{
    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }

    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL && _strcmp("",name) == 0)
		f(name);
}


