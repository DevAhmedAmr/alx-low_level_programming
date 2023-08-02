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
int j = i + 1;
for (; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i != 56)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
