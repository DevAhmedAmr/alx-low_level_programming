/**
 * _isdigit - function that checks for a digit
 * @c: type int input
 *
 * Description: function check
 *
 * Return: 0 succsess , else failed
 *
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		return (1);
	}
	return (0);
}
