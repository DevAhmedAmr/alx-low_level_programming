#include <unistd.h>

/**
 * _putchar - custom implementation to a putchar function from stdio.h lib
 * that prints a char 
 *
 * parameters:
 *
 * @c: char to printed
 *
 * Return: 1 On success else -1
 */
int _putchar(char c)
{
       return (write(1, &c, 1));
}
