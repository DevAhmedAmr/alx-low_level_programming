#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *curr;

	if (ht == NULL || key == NULL)
		return NULL;

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return curr->value;
		}

		/*printf("     >> %s\n", curr->array[index]->key);*/
		curr = curr->next;
	}
	return NULL;
}