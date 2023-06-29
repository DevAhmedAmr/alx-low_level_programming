#include"main.h"
/**
 * reverse_array - Write a function that compares two strings.
 *
 * @a: type string input
 * @n: number of the string charachters
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
    int i = (n - 1), j = 0;

    for (; i >= n / 2; i--, j++)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
