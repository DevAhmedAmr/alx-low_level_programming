#include "variadic_functions.h"
/**
 * print_char - function that prints a char
 *
 * @args: char to be printed
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - function that prints intigers
 *
 * @args: integer to be printed
 */

void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - function that prints a float
 *
 * @args: float to be printed
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - function that prints a string
 *
 * @args: string to be printed
 */

void print_string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
/**
 * print_all - that prints the input based on the specifier
 * @format: the specifier for the input to be printed
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int format_index, formater_index;
	char *separator = "";

	format_ops formater[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(args, format);
	format_index = 0;
	while (format && format[format_index])
	{
		formater_index = 0;
		while (formater_index < 4)
		{
			if (formater[formater_index].specifier[0] == format[format_index])
			{
				printf("%s", separator);
				separator = ", ";
				formater[formater_index].func(args);
				break;
			}
			formater_index++;
		}
		format_index++;
	}
	printf("\n");
	va_end(args);
}
