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
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive ", n);
else
printf("%i is negative ", n);
return (0);
}
