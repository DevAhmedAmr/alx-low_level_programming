#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int random_int(int min, int max)
{
    // Generate a random number between 0 and RAND_MAX
    int rand_num = rand();

    // Scale the random number to the range [min, max]
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

    // Seed the random number generator with the current time
    srand(time(NULL));

    for (i = 0; i < range; i++)
    {
        passwd[i] = allchars[random_int(0, allcharsLength - 1)]; // Subtract 1 from allcharsLength to exclude the null terminator
    }
    passwd[range] = '\0';

    printf("%s", passwd);
    return 0;
}
