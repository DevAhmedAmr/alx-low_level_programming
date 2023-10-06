#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
void print_ht(hash_table_t *ht, const char *key);
void hashTable_free(hash_table_t *hash_table, int size);
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    int ret;

    ret = hash_table_set(NULL, "Holberton", "is cool");
    printf("%d\n", ret);
    return (EXIT_SUCCESS);
}