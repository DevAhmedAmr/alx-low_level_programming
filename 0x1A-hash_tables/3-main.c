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
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);

    printf("return value = %i\n", hash_table_set(ht, "hetairas", "cool"));
    printf("return value = %i\n", hash_table_set(ht, "mentioner", "ahmed"));
    printf("return value = %i\n", hash_table_set(ht, "heliotropes", "ahmed2"));
    printf("return value = %i\n", hash_table_set(ht, "neurospora", "ahmed3"));

    print_ht(ht, "hetairas");
    print_ht(ht, "mentioner");
    print_ht(ht, "heliotropes");
    print_ht(ht, "neurospora");

    printf("----------------------\n");

    printf("return value = %i\n", hash_table_set(ht, "hetairas", "overrided cool"));
    print_ht(ht, "hetairas");

    printf("    ---------      \n");

    printf("return value = %i\n", hash_table_set(ht, "mentioner", "overrided mentioner"));

    ;
    printf("return value = %i\n", hash_table_set(ht, "neurospora", "overrided neurospora"));

    ;
    printf("----------------------\n");

    print_ht(ht, "mentioner");
    print_ht(ht, "heliotropes");
    print_ht(ht, "neurospora");
    hashTable_free(ht, ht->size);
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

void hashTable_free(hash_table_t *hash_table, int size)
{
    int i = 0;
    while (i < size)
    {
        hash_node_t *curr = hash_table->array[i];

        while (curr != NULL)
        {
            hash_node_t *next = (curr)->next;

            free((curr)->key);
            free((curr)->value);
            free(curr);
            curr = next;
        }

        /*free(hash_table->array[i]);*/

        i++;
    }
    free(hash_table->array);
    free(hash_table);
}
