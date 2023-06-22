/**
 * print_triangle - Write a function that prints a triangle,
 *  followed by a new line.
 * 
 * return: 0
 */
void print_triangle(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			putchar(' ');
		}
		for (int j = 0; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
