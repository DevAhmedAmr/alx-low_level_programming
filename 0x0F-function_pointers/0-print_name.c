#include <stddef.h>
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
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
