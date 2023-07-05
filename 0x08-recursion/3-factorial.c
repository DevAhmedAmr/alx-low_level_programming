/**
 * factorial - function that return factorial of a given number
 *
 * parameters:
 * @n: the number that it's factorial wanted to be calculated
 *
 * Return: factorial of the given number
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	if (n > 2)
		return (n * factorial((n - 1)));
	return (n);
}
