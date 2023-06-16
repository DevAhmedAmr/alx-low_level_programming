#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:a program that prints all possible combinations .
 * of two two -digit numbers.
 *
 * Return: 0 succsess , else failed
 */
#include <stdio.h>

int main(void)
{
int i = 0;
for (; i <= 99; i++)
{
int j = 0;
for (; j <= 99; j++)
{
if (i != j)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 99 || j != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
