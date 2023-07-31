#ifndef LISTS_H
#define LISTS_H
/**
 * struct listint_t - struct for a linked list
 *
 * @n: number to be stored
 * @next: ptr to the next element in the linked list
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
