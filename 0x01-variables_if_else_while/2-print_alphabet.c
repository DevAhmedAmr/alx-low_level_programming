#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: program that prints the alphabet in lowercase, followed by a new line.
*
* Return: 0 succsess , else failed
*/

int main(void)
{
for (size_t i = 97; i < 123; i++){
putchar(i);
}
putchar('\n');
return (0);
}
