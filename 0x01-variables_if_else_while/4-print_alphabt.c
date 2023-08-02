#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: print whether the number stored in the variable
* n is positive or negative
*
* Return: 0 succsess , else failed
*/
int main(void)
{
int i = 97;
for (; i < 123; i++)
{
if (i == 101 || i == 113)
continue;
else
putchar(i);
}
putchar('\n');
return (0);
}
