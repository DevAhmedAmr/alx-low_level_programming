#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int random_int(int min, int max)
{
       int rand_num = rand();

        int range = max - min + 1;
    int scaled_num = rand_num % range + min;

    return scaled_num;
}

int main()
{
    char allchars[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~\0";
    char passwd[100];
    int allcharsLength = strlen(allchars) + 1;
    int range = random_int(50, 100);
    int i;

        srand(time(NULL));

    for (i = 0; i < range; i++)
    {
        passwd[i] = allchars[random_int(0, allcharsLength - 1)];    }
    passwd[range] = '\0';

    printf("%s", passwd);
    return 0;
}
