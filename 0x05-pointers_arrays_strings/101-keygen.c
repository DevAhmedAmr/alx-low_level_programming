#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int getRandomAsciiNumber()
{
    int num = rand() % (122 - 48 + 1) + 32; /* generate a random number between 32 and 122 (inclusive)*/
    printf("%i\n", num);

    return num;
}
int main(void)
{
    int i = 0;
    int n = 0;
    int sum = 0;
    char password[100];
    int totalSum = 0;
    int random;
    char asci;
    srand(time(NULL)); /* seed the random number generator with current time*/

    for (i = 0; i < 2000; i++)
    {
        if (totalSum == 2772)
        {
            break;
        }
        if (totalSum < 2773 && totalSum > 2651)
        {
            int x = 2772 - totalSum;
            totalSum += x;
            asci = x;
            password[i] = asci;
        }

        else if (totalSum < 2652)
        {
            random = getRandomAsciiNumber();
            totalSum += random;
            asci = random;
            // printf("%c", asci);
            password[i] = asci;
        }
        printf("total sum = %i", totalSum);
    }
    printf("%s , %i", password, totalSum);
    return 1;
}
