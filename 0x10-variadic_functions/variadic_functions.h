#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stddef.h>
#include<stdio.h>
#include<string.h>
/* Function Prototypes */
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct format_ops - struct to hold format specifier
 * and the function that will print it
 * @specifier: format specifier
 * @func: function that will print
 */
typedef struct format_ops
{
	char *specifier;
	void (*func)(va_list);
} format_ops;
#endif /* VARIADIC_FUNCTIONS_H */
