#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * struct list_s - struct to make a linked list
 * @str: elements of linked list type str
 * @len: length of the linked arr
 * @next: pointer to next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */
