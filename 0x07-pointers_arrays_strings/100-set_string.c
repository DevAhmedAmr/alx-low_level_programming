/**
 * set_string -  functio that takes a double pointer and changes
 * its dereferenced value
 *
 * parameters:
 * @s: a double pointer to a string that we want to change its value
 * @to: the string that we want to change the value to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
