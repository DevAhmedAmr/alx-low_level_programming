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
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
