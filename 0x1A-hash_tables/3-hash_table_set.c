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
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		current = ht->array[index];
		if (strcmp(current->key, key) == 0)
		{
			new_node->next = current->next;
			ht->array[index] = new_node;
			free_node(current);
			return (1);
		}
		while (current->next != NULL && strcmp(current->next->key, key) != 0)
		{
			current = current->next;
		}
		if (strcmp(current->key, key) == 0)
		{
			new_node->next = current->next->next;
			free_node(current->next);
			current->next = new_node;
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
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