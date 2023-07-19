#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - eazea
 * @name: aeza
 * @f: eza
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
