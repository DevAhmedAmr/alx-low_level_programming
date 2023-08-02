#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: print whether the number stored in the variable n is
* positive or negative.
*
* Return: 0 succsess , else failed
*/

int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
printf("Last digit of %i is", n);
if (lastDigit > 5)
printf(" %i and is greater than 5\n", lastDigit);
else if (lastDigit == 0)
printf(" %i and is 0\n", lastDigit);
else
printf(" %i and is less than 6 and not 0\n", lastDigit);
return (0);
}
