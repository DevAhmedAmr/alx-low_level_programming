#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomAsciiNumber()
{
    int num = rand() % 128; /* generate a random number between 0 and 127 (inclusive) */
    return num;
}

int main(void)
{
    int i = 0;
    int totalSum = 0;
    char password[100] = {0}; /* initialize the password array to all zeros */
    srand(time(NULL)); /* seed the random number generator with current time*/

    while (totalSum != 2772 && i < 100)
    {
        if (totalSum < 2652)
        {
            int random = getRandomAsciiNumber();
            totalSum += random;
            password[i] = random;
            i++;
        }
        else
        {
            int x = 2772 - totalSum;
            totalSum += x;
            password[i] = x;
            i++;
        }
    }

    printf("%s , %i", password, totalSum);
    return 0;
}
