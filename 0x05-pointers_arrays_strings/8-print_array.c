#include<stdin.h>
void print_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i", a[i]);
        if (i != n - 1)
        {
            putchar(',');
            putchar(' ');
        }
    }
}
