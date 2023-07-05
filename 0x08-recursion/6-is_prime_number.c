/**
 * prime_number_helper - Helper function for checking if the inpit is a prime
 * number recursively.
 *
 * parameters:
 *
 * @divisor: The current divisor that is being tested.
 * @n: The number to be checked for primality
 * .
 * Return: Returns 1 if the number is prime, 0 otherwise.
 */
int prime_number_helper(int divisor, int n)
{

	/*if thats true that means we tried all the numbers that smaller than n */
	/*none of them cloud divide n successfully so that means its a prime number*/
	if (divisor > n)
	{
		return (1);
	}
	/*determine if the num is not a prime Nummer (if true)*/
	if (n % divisor == 0 && divisor != 1 &&
		divisor != n && divisor <= n)
	{

		return (0);
	}
	return (prime_number_helper(divisor + 1, n));
}
/**
 * is_prime_number - Checks if a given number is a prime number or not.
 *
 * @n:  The number that wanted to be checked for primality.
 *
 * Return: 1 if the number is prime, otherwise 0 .
 */
int is_prime_number(int n)
{
	int divisor = 1;

	if (n < 2)
	{
		return (0);
	}

	return (prime_number_helper(divisor, n));
}

