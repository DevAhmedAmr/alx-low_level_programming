#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	ht->array[key_index((unsigned char *)key, ht->size)] = malloc(sizeof(hash_node_t));

	ht->array[key_index((unsigned char *)key, ht->size)]->key = strdup((char *)key);

	ht->array[key_index((unsigned char *)key, ht->size)]->value = strdup((char *)value);
	ht->array[key_index((unsigned char *)key, ht->size)]->next = NULL;
	return (0);
}
