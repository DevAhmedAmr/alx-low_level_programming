#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int getRandomAsciiNumber()
{
    int num = rand() % (122 - 48 + 1) + 32;
    printf("%i\n", num);

    return num;
}
int main(void)
{
    int i = 0;
    int x;
    char password[100];
    int totalSum = 0;
    int random;
    char asci;
    srand(time(NULL)); 

    for (i = 0; i < 2000; i++)
    {
        if (totalSum == 2772)
        {
            break;
        }
        if (totalSum < 2773 && totalSum > 2651)
        {
            x = 2772 - totalSum;
            totalSum += x;
            asci = x;
            password[i] = asci;
        }

        else if (totalSum < 2652)
        {
            random = getRandomAsciiNumber();
            totalSum += random;
            asci = random;
      
            password[i] = asci;
        }
        printf("total sum = %i", totalSum);
    }
    printf("%s , %i", password, totalSum);
    return 1;
}
