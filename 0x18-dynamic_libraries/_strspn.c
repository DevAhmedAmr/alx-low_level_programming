/**
 * _strspn - Calculates the length of the initial segment of a string that
 * consists of only characters from a specified set of accepted characters.
 *
 * parameters:
 * @s: A pointer to the input string.
 * @accept: A pointer to the set of accepted characters.
 *
 * Return: The length of the initial segment of the string.
 * if all the set of 'accepted chars' in the 's' variable
 * will return full length of 's'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sLen = 0, acceptLen = 0, is_match = 0, j, i;
	/*get s variable length*/
	while (s[sLen] != '\0')
		sLen++;

	/*get accept variable length*/
	while (accept[acceptLen] != '\0')
		acceptLen++;

	/*compare 2 strings and return*/
	for (i = 0; i < sLen; i++)
	{

		for (j = 0; j < acceptLen; j++)
		{
			if (s[i] == accept[j])
			{
				is_match = 1;
				break;
			}

			/*if 's' contain a char that not in 'accept' */
			is_match = 0;
		}
		if (is_match == 0)
		{
			return (i);
		}
	}
	return (i);
}
