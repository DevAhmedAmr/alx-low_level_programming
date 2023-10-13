
#include "hash_tables.h"

void put_before_node(shash_table_t *ht, shash_node_t *curr_pos, shash_node_t *node)
{

	if (curr_pos->sprev)
	{ /**insert before the current node (curr)*/
		node->snext = curr_pos;
		node->sprev = curr_pos->sprev;
		curr_pos->sprev->snext = node;
		curr_pos->sprev = node;
	}
	else
	{
		/**
		 * insert at the begining (as stack)
		 * (if the array empty or contain 1 element)
		 */
		curr_pos->sprev = node;
		node->snext = curr_pos;
		node->sprev = NULL;
		ht->shead = node;
	}
}
void set_snode(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *curr = ht->shead;

	char *str = new_node->key;
	int put_before = 0;
	if (new_node->next == NULL)
	{

		while (curr)
		{
			int cmp = strcmp(curr->key, str);

			if (cmp > 0)
			{
				put_before = 1;
				break;
			}

			if (curr->snext == NULL)
				break;
			curr = curr->snext;
		}
		if (put_before == 0)
			insert_add_theEnd(ht, curr, new_node);

		else if (curr && put_before == 1)
			put_before_node(ht, curr, new_node);
	}
	else

	{
		while (new_node->next != NULL)
		{
			break;
		}
		printf("messing?\n");
	}
}

void insert_add_theEnd(shash_table_t *ht, shash_node_t *curr, shash_node_t *new_node)
{
	curr->snext = new_node;
	new_node->sprev = curr;
	new_node->snext = NULL;
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	unsigned long index = key_index(key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(shash_node_t));
		ht->array[index]->key = strdup((char *)key);
		ht->array[index]->value = strdup((char *)value);
		ht->array[index]->next = NULL;

		if (ht->shead == NULL)
			set_shead_and_stail(ht, index);
		else
			set_snode(ht, ht->array[index]);
	}
	else
	{

		shash_node_t *curr = ht->array[index];

		while (curr != NULL)
		{
			/*update old value*/
			if (!strcmp(curr->key, key))
			{
				free(curr->value);
				curr->value = strdup(value);
				return (1);
			}

			curr = curr->next;
		}
		if (curr == NULL)
		{
			curr = malloc(sizeof(shash_node_t));
			curr->key = strdup(key);
			curr->value = strdup(value);

			curr->next = ht->array[index];
			ht->array[index] = curr;
			set_snode(ht, curr);
		}
	}

	return 0;
}
