#include"main.h"
#include<stdio.h>
char *reverseStr(char *str, int len);
int infintyAdd(char *num1, char *num2);
/**
 * _strlen -  a function that returns the length of a string.
 *
 * @s: type str
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

int main(int argc, char *argv[])
{

    if (argc != 3)
    {
        printf("0\n");
        return 1;
    }
    if (infintyAdd(argv[1], argv[2]) == 1)
    {
        printf("Error\n");
        return 1;
    }
    return 0;
}
char *reverseStr(char *str, int len)
{
    int i, j;

    for (i = len - 1, j = 0; j < len / 2; i--, j++)
    {
        int tmp = str[i];

        str[i] = str[j];
        str[j] = tmp;
    }
    return (str);
}
int infintyAdd(char *num1, char *num2)
{
    char finalNum[100];
    int carry = 0, sum = 0, counter = 0;
    int len = (_strlen(num1) > _strlen(num2)) ? _strlen(num1) : _strlen(num2);
    int len1 = _strlen(num1), len2 = _strlen(num2);
    int i, j = 0;

    for (j = len2 - 1, i = len1 - 1; len - counter >= 0 || carry; i--, j--)
    {

        sum = carry;
        if (i >= 0)
        {
            int num = (int)num1[i] - 48;
            if (num > 9)
                return 1;
            sum += num;
        }
        if (j >= 0)
        {
            int num = (int)num2[j] - 48;
            if (num > 9)
                return 1;
            sum += num;
        }
        if (carry == 0 && i < 0 && j < 0)
        {
            break;
        }

        finalNum[counter] = (sum % 10) + 48;

        carry = sum / 10;
        counter++;
    }

    finalNum[_strlen(finalNum)] = '\0';

    reverseStr(finalNum, _strlen(finalNum));

    printf("%s\n", finalNum);

    return 0;
}
