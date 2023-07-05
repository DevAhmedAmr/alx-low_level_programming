#include <unistd.h>
/**
 * _puts_recursion - a function that takes an string and print if without loops
 * paramter:
 * @s: type string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

    if (*s != '\0')
    {
        write(1, s, 1);
        s++;
        _puts_recursion(s);
    }
    else
        write(1, "\n", 1);
}
