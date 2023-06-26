#include<main.h>
/**
 * swap_int -  function that swaps the values of two integers.
 *
 * @a: a pointer to a type int variable
 * @b: a pointer to a type int variable
 *
 * return: 0 void
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

