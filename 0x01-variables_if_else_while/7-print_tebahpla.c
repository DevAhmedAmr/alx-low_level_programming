#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:  a program that prints the lowercase alphabet in reverse:
 * followed by a new line
 *
 * Return: 0 succsess , else failed
 */
int main(void)
{
int i = 122;
for (; i >= 97; i--)
putchar(i);
putchar('\n');
return (0);
}

