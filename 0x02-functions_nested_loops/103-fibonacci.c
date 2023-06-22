#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
        unsigned long firstNum = 1;

        unsigned long  secondNum = 2;

        int i;

        printf("%lu, %lu, ", firstNum, secondNum);
        for (i = 0; i < 48; i++)
        {
                unsigned long nextNumber = firstNum + secondNum;

                firstNum = secondNum;

                secondNum = nextNumber;

                printf("%lu", secondNum);
                if (i != 47)
                {
                        putchar(',');
                        putchar(' ');
                }
                else
                {
                        putchar('\n');
                }
        }
        return (0);
}
