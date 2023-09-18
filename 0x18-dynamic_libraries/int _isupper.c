/**
 * _isupper - Function
 * @c: type int
 *
 * Description: function that checks for uppercase character.
 *
 * Return: 1 if a upper case else 0
 *
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}