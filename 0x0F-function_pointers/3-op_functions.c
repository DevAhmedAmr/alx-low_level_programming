#include"calc.h"
/**
 * op_add - function that get a sum for 2 numbers
 * @a: first number
 * @b:second number
 *
 * Return: the sum of the 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function that get a sub of 2 numbers
  * @a: first number
  * @b:second number
  *
  * Return: the sub of the 2 numbers
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function that get the multiplication for 2 numbers
  * @a: first number
  * @b:second number
  *
  * Return: the multiplication of the 2 numbers
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function that get a division of 2 numbers
  * @a: first number
  * @b:second number
  *
  * Return: the division of the 2 numbers
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function that get the mod of 2 numbers
  * @a: first number
  * @b:second number
  *
  * Return: the mod of the 2 numbers
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

