#include "hash_tables.h"
void free_node(hash_node_t *node);
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
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL || key == NULL || value == NULL)
		return (0);

	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		hash_node_t *curr = ht->array[index];

		while (curr != NULL && strcmp(curr->key, key) != 0)
			curr = curr->next;

		if (curr != NULL && strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			free_node(new_node);
		}
		else if (curr == NULL)
		{
			curr = malloc(sizeof(hash_node_t));
			curr->key = strdup(key);
			curr->value = strdup(value);
			curr->next = NULL;
		}
	}

	return (1);
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