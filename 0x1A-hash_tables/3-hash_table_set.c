#include "hash_tables.h"
/**
 * hash_table_set - that adds an element to the hash table.
 *
 * @ht: the hash table we want to add or update the key/value to
 * @key:  is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	ht->array[key_index((unsigned char *)key, ht->size)] =
		malloc(sizeof(hash_node_t));

	ht->array[key_index((unsigned char *)key, ht->size)]->key =
		strdup((char *)key);

	ht->array[key_index((unsigned char *)key, ht->size)]->value =
		strdup((char *)value);
	ht->array[key_index((unsigned char *)key, ht->size)]->next = NULL;
	return (0);
}
