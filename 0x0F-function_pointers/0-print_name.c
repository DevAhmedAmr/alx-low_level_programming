#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - function that takes a pointer to an another fuction and
 * excute it
 *
 * parameters:
 * @name: name to be printed
 * @f: pointer to function to be excuted
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
(*f)(name);
}
