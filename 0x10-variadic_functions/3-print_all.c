#include "variadic_functions.h"
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

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

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int format_index, ops_index;
	char *separator = "";

	struct format_ops {
		char *specifier;
		void (*func)(va_list);
	} ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(args, format);
	format_index = 0;
	while (format && format[format_index])
	{
		ops_index = 0;
		while (ops_index < 4)
		{
			if (ops[ops_index].specifier[0] == format[format_index])
			{
				printf("%s", separator);
				separator = ", ";
				ops[ops_index].func(args);
				break;
			}
			ops_index++;
		}
		format_index++;
	}

	printf("\n");
	va_end(args);
}
