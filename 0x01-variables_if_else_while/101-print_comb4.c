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
int k = j + 1;
for (; k <= 57; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
