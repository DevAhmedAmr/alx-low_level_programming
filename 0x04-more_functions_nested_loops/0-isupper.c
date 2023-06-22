
/**
 * _isupper - Function
 *
 * description: function that checks for uppercase character.
 * 
 * return: 1 if a upper case else 0
 *
 */
int _isupper(int c)
{
	int i;
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return 1;
		}
	}
	return 0;
}
