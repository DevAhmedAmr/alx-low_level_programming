#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int i;

    ht = hash_table_create(1024);

    for (i = 0; i < 1024; i++)
        printf("%p\n", (void *)ht->array[i]);

    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "ahmed");
    hash_table_set(ht, "subgenera ", "amr");
    hash_table_set(ht, "stylist", "ali");
    printf("%s\n", ht->array[key_index((const unsigned char *)"hetairas", 1024)]->value);

    printf("%s\n", ht->array[key_index((const unsigned char *)"mentioner", 1024)]->value);

    printf("%s\n", ht->array[key_index((const unsigned char *)"subgenera", 1024)]->value);

    printf("%s\n", ht->array[key_index((const unsigned char *)"stylist", 1024)]->value);

    if (ht->array[key_index((const unsigned char *)"ahmed", 1024)] != NULL)
    {
        printf("%s\n", ht->array[key_index((const unsigned char *)"ahmed", 1024)]->value);
    }
    hash_table_set(ht, "stylist", "overrided Ali");
    printf("%s\n", ht->array[key_index((const unsigned char *)"stylist", 1024)]->value);

    return (EXIT_SUCCESS);
}
