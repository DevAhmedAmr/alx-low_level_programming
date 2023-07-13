/**
 * wildcmpHelper - a helper function that compares 2 strings
 * that contains wildcards
 *
 * parameters:
 * @s1: the first string that wanted to be compared
 * @s2: the second string to be compared
 * @seenAstar: a boolen that checks if s2 has star or not
 *
 * Return: 1 two strings are identical else 0
 */
int wildcmpHelper(char *s1, char *s2, int seenAstar)
{
	if (*s2 == '*')
	{
		s2++;
		seenAstar = 1;
		return (wildcmpHelper(s1, s2, seenAstar));
	}
	if (*s1 != *s2 && *s1 != '\0')
	{
		if (seenAstar == 1)
			s1++;
		else
			return (0);
	}
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		if (*s2 == '*')
			s2++;
		else
			return (0);
	}
	if (*s1 != '\0' && *s2 == '\0')
	{
		s2--;
		if (*s1 != *s2 && *s1 != '\0')
		{

			s1++;
			return (wildcmpHelper(s1, s2, seenAstar));
		}
		if (*s1 != *s2)
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmpHelper(s1, s2, seenAstar));
}

/**
 * wildcmp - a function that compares 2 strings that contains wildcards
 *
 * parameters:
 * @s1: the first string that wanted to be compared
 * @s2: the second string to be compared
 *
 * Return: 1 two strings are identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	int seenAstar = 0;

	if (*s2 == '*')
	{
		s2++;
		seenAstar = 1;
		return (wildcmp(s1, s2));
	}

	if (*s1 != *s2 && *s1 != '\0')
	{
		s1++;
		return (wildcmp(s1, s2));
	}
	return (wildcmpHelper(s1, s2, seenAstar));
}

/*
 * function Explanation
 *
 * The function initializes the seenAstar flag and
 * skips any leading * characters in s2. It moves the pointer s1 to
 * the position of the first character match in the two strings.
 *
 * The function enters a loop to compare the strings one
 * character at a time.
 *
 * If a * character is encountered in s2, the pointer s2 moves to
 * the next character, and the seenAstar flag is set tp true.
 *
 * If the characters do not match and s1 has not reached the end, the pointer
 * s1 moves to the next character if the seenAstar flag is set. Otherwise,
 * the function retuns 0 (no match).
 *
 * If the characters match and are not the end of the strings,
 * both pointers s1 and s2 move to the next characters.
 *
 * If the end of s1 is reached but not the end of s2, the function checks
 * if the remaining characters in s2 are * characters and skips them. If not,
 *  the function returns 0 (no match).
 *
 * If the end of s2 is reached but not the end of s1,
 * the function moves the pointer s1 to the position of the
 * last character match in the two strings. If no match is found,
 * the function returns 0 (no match).
 *
 * If the end of both strings is reached, the function returns 1 (match).
 */
