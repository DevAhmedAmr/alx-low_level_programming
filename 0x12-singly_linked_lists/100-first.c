
#include "lists.h"
#include <stdio.h>
/**
 * hare - function that prints a string before the
 * main function is executed.
 */
void hare(void) __attribute__((constructor));

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
