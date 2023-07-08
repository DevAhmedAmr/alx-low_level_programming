#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc == 2)
    {

        int list[5] = {25, 10, 5, 2, 1};
        int total = 0;
        int arg = atoi(argv[1]);
        int i = 0;
        int NumberOfCoins = 0;

        if (arg < 0)
        {
            printf("0\n");
            return 0;
        }

        while (total != arg)

        {
            if (total + list[i] <= arg)
            {
                NumberOfCoins++;
                /*printf("%i\n", list[i]);*/
                total += list[i];
                i = 0;
                continue;
            }

            i++;
            if (i > 4)
            {
                i = 0;
            }
        }
        printf("%i\n", NumberOfCoins);
    }
    else
    {
        printf("Error\n");
        return 1;
    }
    return 0;
}

