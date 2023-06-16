#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: program that prints the alphabet
* in lowercase followed by a new line.
*
* Return: 0 succsess , else failed
*/

int main(void)
{
int i = 97;
for (; i < 123; i++)
putchar(i);
i = 65;
for (; i <= 90; i++)
putchar(i);
putchar('\n');
return (0);
}
