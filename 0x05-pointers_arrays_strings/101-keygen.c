#define PASSWORD_LENGTH 8
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i;
    char passwd[PASSWORD_LENGTH + 1];
    const char charcters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int len = sizeof(charcters) - 1;
    srand(time(NULL));
   
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        passwd[i] = charcters[rand() % len];
    }
    passwd[len] = '\0';

    printf("%s\n", passwd);
    return 0;
}
