#include "hash_tables.h"
/**
 * hash_table_get - function that that retrieves a value associated with a key.
 *
 * @ht: the hash table we want to add or update the key/value to
 * @key:  is the key. key can not be an empty string
 *
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *curr;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}

		/*printf("     >> %s\n", curr->array[index]->key);*/
		curr = curr->next;
	}
	return (NULL);
}
