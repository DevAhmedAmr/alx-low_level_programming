#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:a program that prints all possible combinations .
 * of single-digit numbers.  separated by ,
 *
 * Return: 0 succsess , else failed
 */
int main(void)
{
int i = 48;
for (; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}

