#include <unistd.h>
/**
* _putchar  - function take a chars as and input and print them
*
* @c: prameter char
*
* Description: print chars
*
* Return: 0 succsess , else failed
*/
int _putchar(char c)
{
	write(1, &c, sizeof(c));
	return (0);
}
