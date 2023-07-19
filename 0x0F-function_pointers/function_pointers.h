#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTER_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void print_name_uppercase(char *name);
void print_name_as_is(char *name);
#endif
