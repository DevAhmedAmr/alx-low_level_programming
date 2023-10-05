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
	unsigned long int i;

	if (result == NULL)
		return (NULL);

	result->size = size;

	result->array = malloc(sizeof(hash_node_t *) * size);

	if (result->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		result->array[i] = NULL;

	return (result);
}
