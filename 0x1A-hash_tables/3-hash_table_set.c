#include "hash_tables.h"
void free_node(hash_node_t *node);
void test(hash_node_t *prev, hash_node_t **curr, const char *key, const char *value);
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

	if (strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		ht->array[index]->key = strdup((char *)key);
		ht->array[index]->value = strdup((char *)value);
		ht->array[index]->next = NULL;
	}
	else
	{
	}

	return (1);
}

void test(hash_node_t *prev, hash_node_t **curr, const char *key, const char *value)
{
	(*curr) = malloc(sizeof(hash_node_t));
	(*curr)->key = strdup(key);
	(*curr)->value = strdup(value);
	(*curr)->next = NULL;
	(prev)->next = *curr;
}

/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
