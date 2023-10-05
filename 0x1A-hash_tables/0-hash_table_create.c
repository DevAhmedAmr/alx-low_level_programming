#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 *
 * @size: The size of the array
 *
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *result = malloc(sizeof(hash_table_t));

	result->size = size;
	result->array = malloc(sizeof(hash_node_t *) * size);

	return (result);
}
