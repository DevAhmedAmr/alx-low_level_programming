int sqrtHelper(int num, int n);

/**
 * _sqrt_recursion - function that calcualte the square root
 * of a number by recursion
 *
 * @parameters:
 * @n: the number that its sqaure wanted to be calcualted
 *
 * Return: sqaure root of the number
 */

int _sqrt_recursion(int n)
{
	int num = 0;

	return (sqrtHelper(num, n));
}
/**
 * sqrtHelper - a function that takes 2 parameter and calulate the sqrt
 *
 * @num: the number that used to determine the root square
 * it intialized to 0 and we multiplay to it self untill it = n
 *
 * @n: the number that we want to get its root square
 *
 * Return: n (the root square of the num)
 */
int sqrtHelper(int num, int n)
{
	if (num > n)
		return (-1);

	if (num * num != n)
		return (sqrtHelper(num + 1, n));
	return (num);
}
