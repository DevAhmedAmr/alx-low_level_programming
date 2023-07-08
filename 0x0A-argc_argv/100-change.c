#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int list[5] = {25, 10, 5, 2, 1};
    int total = 0;
    int arg;
    int i;
    int NumberOfCoins = 0;

    /* Check if the number of arguments is correct */
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    arg = atoi(argv[1]);

    /* Check if the input number is negative */
    if (arg < 0)
    {
        printf("0\n");
        return 0;
    }

    for (i = 0; i < 5 && total != arg; i++)
    {
        while (total + list[i] <= arg)
        {
            NumberOfCoins++;
            total += list[i];
        }
    }

    printf("%i\n", NumberOfCoins);
    return 0;
}
