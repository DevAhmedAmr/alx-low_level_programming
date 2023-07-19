#include"calc.h"
/**
 * get_op_func - A function that determines the mathematical operation
 * to be done based on the mathematical signs.
 *
 * @parameters:
 * @s: the  mathematical sign
 *
 * Return: the result based on  mathematical sign or NULL
 * if it not a  mathematical sign
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
