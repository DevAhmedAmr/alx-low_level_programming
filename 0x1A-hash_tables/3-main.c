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

    // Test Case 1: Insert a key-value pair into an empty table
    hash_table_set(ht, "key1", "value1");

    // Test Case 2: Insert a key-value pair with an existing key (update value)
    hash_table_set(ht, "key1", "new_value1");

    // Test Case 3: Insert multiple key-value pairs
    hash_table_set(ht, "key2", "value2");
    hash_table_set(ht, "key3", "value3");
    hash_table_set(ht, "key4", "value4");

    // Test Case 4: Insert a key-value pair with an empty key (should fail)
    int result = hash_table_set(ht, "", "empty_key_value");
    printf("Result of inserting an empty key: %d\n", result);

    // Test Case 5: Insert a key-value pair with a NULL key (should fail)
    result = hash_table_set(ht, NULL, "null_key_value");
    printf("seg fault\n");

    printf("Result of inserting a NULL key: %d\n", result);

    // Print the hash table to verify the results
    printf("Hash Table Contents:\n");

    // Cleanup
    hashTable_free(ht, 1024);
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
