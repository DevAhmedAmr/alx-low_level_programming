#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int list[5] = {25, 10, 5, 2, 1};
    int arg;
    int i = 0;
    int NumberOfCoins = 0;
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    arg = atoi(argv[1]);
    if (arg < 0)
    {
        printf("0\n");
        return 0;
    }

    for (i = 0; i < 5; i++)
    {
        if (arg >= list[i])
        {
            NumberOfCoins += arg / list[i];
            arg = arg % list[i];
            if (!arg % list[i])
            {
                break;
            }
        }
    }
    printf("%i\n", NumberOfCoins);
    return 0;
}

