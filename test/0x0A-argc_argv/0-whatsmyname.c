#include <stdio.h>

/**
 * main - Entry point app that prints its file name and the path
 *
 * @argc: Number of command line arguments
 *
 * @argv: Array of command line arguments
 *
 * Return: Always 0 if  (Success) otherwise return 1
 *
 */
int main(int argc, char *argv[])
{
	if (argc < 0)
	{
		return (0);
	}

	while (*argv[0])
	{
		putchar(*argv[0]);
		argv[0]++;
	}
	putchar('\n');

	return (0);
}
