#include"main.h"

/**
 * main - Entry point . an app that pints the number of argv
 *
 * @argc: Number of arguments passed to the code
 *
 * @argv: An array of pointers to the args
 *
 * Return: Always 0 if Success else failed 1
 *
 */
int main(int argc, char *argv[])
{
	if (argv[0] == 0)
		return (1);

	_putchar((argc - 1) + 48);
	_putchar('\n');
	return (0);
}
