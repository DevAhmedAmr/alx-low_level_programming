#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: Write a program that prints all the numbers of base 16
* in lowercase followed by a new line.
*
* Return: 0 succsess , else failed
*/
int main(void)
{
int i = 48;
for (; i <= 57; i++)
putchar(i);
i = 97;
for (; i <= 102; i++)
putchar(i);
putchar('\n');
return (0);
}

