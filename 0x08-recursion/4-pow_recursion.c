/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * then return it.
 *
 * @x: parm of The base value that wanted to be calcualted.
 * @y:parm of The exponent value that wanted to be raised.
 *
 * Return: The value of x raised to the power of y,
 * or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	if (y > 0 && y != 1)
		return (x * _pow_recursion(x, y - 1));
	return (x);
}

