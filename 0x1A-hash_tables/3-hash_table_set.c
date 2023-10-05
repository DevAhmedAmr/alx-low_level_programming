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
	unsigned long index = key_index((unsigned char *)key, ht->size);

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));

		if (ht->array[index] == NULL)
			return (0);

		ht->array[index]->key = strdup((char *)key);

		if (ht->array[index]->key == NULL)
			return (0);

		ht->array[index]->value = strdup((char *)value);

		if (ht->array[index]->value == NULL)
			return (0);

		ht->array[index]->next = NULL;
	}
	else
	{
		hash_node_t *curr = ht->array[index];

		while (curr != NULL)
			curr = curr->next;

		curr = malloc(sizeof(hash_node_t));

		if (curr == NULL)
			return (0);

		curr->key = strdup((char *)key);

		if (ht->array[index]->key == NULL)
			return (0);

		curr->value = strdup((char *)value);

		if (ht->array[index]->value == NULL)
			return (0);

		curr->next = NULL;
	}

	return (1);
}
