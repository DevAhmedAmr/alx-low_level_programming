#include<stdio.h>

/**
 * main - Entry point too an app that prints the aguments that in command line
 *
 * @argc: number of the args
 *
 * @argv: args value
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
