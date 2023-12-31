#include "hash_tables.h"
void free_node(hash_node_t *node);
void insert_in_theEnd(hash_node_t *prev, hash_node_t **curr,
					  const char *key, const char *value);
void insert_stack(hash_table_t *ht, char *key, char *value);
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
	unsigned long index;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		ht->array[index]->key = strdup((char *)key);
		ht->array[index]->value = strdup((char *)value);
		ht->array[index]->next = NULL;
	}
	else
	{
		hash_node_t *curr = ht->array[index];
		hash_node_t *prev = NULL;

		while (curr != NULL && strcmp(curr->key, key) != 0)
		{
			if (curr->next != NULL)
			{
				prev = curr;
			}
			curr = curr->next;
		}
		if (curr != NULL && strcmp(curr->key, key) == 0)
		{
			if (prev != NULL)
				prev->next = curr->next;
			else
				ht->array[index] = curr->next;
			insert_stack(ht, (char *)key, (char *)value);
			free_node(curr);
			return (1);
		}
		else
			insert_stack(ht, (char *)key, (char *)value);
	}
	return (1);
}
/**
 * insert_stack - that function that insert in the begining linked list
 *
 * @ht: the hash table we want to add or update the key/value to
 * @key:  is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 */
void insert_stack(hash_table_t *ht, char *key, char *value)
{
	unsigned long index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
}
/**
 * insert_in_theEnd - that function that insert in the end of linked list
 *
 * @curr: the hash table we want to add or update the key/value to
 * @prev: paramter
 * @key:  is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 */
void insert_in_theEnd(hash_node_t *prev, hash_node_t **curr,
					  const char *key, const char *value)
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
