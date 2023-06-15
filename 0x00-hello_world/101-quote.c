#include <stdio.h>
/**
* main - Entry point
*
* Description: app that prints some text , to the standard error.
*
* Return: 0 (success) : 1 (failed)
*/

int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stderr, quote);
return (1);
}
