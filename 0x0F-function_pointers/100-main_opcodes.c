#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point to an app that prints the opcodes of
 * its own main function.
 *
 * @argc: number of passed parameters
 * @argv: array of parameters in string
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
        int i;

        if (argc != 2)
        {
                printf("Error\n");
                exit(1);

        }

        int num_bytes = atoi(argv[1]);

        if (num_bytes < 0)
        {
                printf("Error\n");
                exit(2);

        }

        char *function_ptr = (char *)main;

        for (i = 0; i < num_bytes; i++)
        {
		printf("%02hhx ", function_ptr[i]);

                if (i < num_bytes - 1)
                        printf(" ");
                else
                        printf("\n");
        }

        return (0);
}i
