#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;
	while (i < ht->size)
	{
		hash_node_t *curr = ht->array[i];

		while (curr != NULL)
		{
			hash_node_t *next = (curr)->next;

			free((curr)->key);
			free((curr)->value);
			free(curr);
			curr = next;
		}

		i++;
	}
	free(ht->array);
	free(ht);
}
