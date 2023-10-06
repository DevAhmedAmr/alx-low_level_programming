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
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);

    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "ahmed");
    hash_table_set(ht, "subgenera", "ahmed2");
    hash_table_set(ht, "stylist", "ahmed3");

    print_ht(ht, "hetairas");
    print_ht(ht, "mentioner");
    print_ht(ht, "subgenera");
    print_ht(ht, "stylist");

    printf("----------------------\n");

    hash_table_set(ht, "hetairas", "overrided cool");
    print_ht(ht, "hetairas");

    printf("    ---------      \n");

    hash_table_set(ht, "subgenera", "overrided subgenera");
    hash_table_set(ht, "stylist", "overrided stylist");
    printf("----------------------\n");

    print_ht(ht, "subgenera");
    print_ht(ht, "stylist");

    return (EXIT_SUCCESS);
}

void print_ht(hash_table_t *ht, const char *key)
{
    size_t index = key_index((const unsigned char *)key, 1024);
    hash_node_t *curr = ht->array[index];

    while (curr != NULL)
    {
        if (strcmp(curr->key, (char *)key) == 0)
        {
            printf("%s %s\n", key, curr->value);
            /*key_index((const unsigned char *)"stylist", 1024)*/
            return;
        }

        /*printf("     >> %s\n", curr->array[index]->key);*/
        curr = curr->next;
    }
    printf("%s: not found\n", key);
}
