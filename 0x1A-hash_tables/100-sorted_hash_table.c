#include "hash_tables.h"
void put_before_node(shash_table_t *ht, shash_node_t *curr, size_t index);
void insert_add_theEnd(shash_table_t *ht, shash_node_t *curr, size_t index);
void print_node(shash_node_t *node)
{
	shash_node_t *curr = node;
	while (curr != NULL)
	{
		printf("%s, %s ,", node->key, node->value);
		curr = curr->next;
	}
}
void print_node_s(shash_node_t *node)
{
	shash_node_t *curr = node;
	while (curr != NULL)
	{
		printf("%s, %s ,", curr->key, curr->value);

		if (curr->snext == NULL)
			break;

		curr = curr->snext;
	}
	puts("");
}
void print_node2(shash_node_t *node)
{
	shash_node_t *curr = node;
	while (curr != NULL)
	{
		printf("%s, %s ,", curr->key, curr->value);

		if (curr->next == NULL)
			break;

		curr = curr->next;
	}
	puts("");
}
void insert_add_theEnd(shash_table_t *ht, shash_node_t *curr, size_t index)
{
	curr->snext = ht->array[index];
	ht->array[index]->sprev = curr;
	ht->array[index]->snext = NULL;
}
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	size_t i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return NULL;

	ht->shead = NULL;
	ht->stail = NULL;
	ht->size = size;

	ht->array = malloc(sizeof(shash_node_t) * size);
	if (ht->array == NULL)
		return NULL;

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return ht;
}
void set_head_and_tail(shash_table_t *ht, size_t index)
{

	ht->array[index]->sprev = NULL;
	ht->array[index]->snext = NULL;
	ht->shead = ht->array[index];
	ht->stail = ht->array[index];
	ht->shead->snext = NULL;
	ht->shead->sprev = NULL;

	// ht->shead = malloc(sizeof(shash_node_t));
	// ht->shead->key = ht->array[index]->key;
	// ht->shead->value = ht->array[index]->value;
	// ht->shead->snext = NULL;
	// ht->shead->sprev = NULL;
	// ht->shead->next = NULL;
	// ht->stail = ht->shead;
}
void set_snode(shash_table_t *ht, size_t index)
{
	shash_node_t *curr = ht->shead;
	char *str = ht->array[index]->key;
	int put_before = 0;

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
		insert_add_theEnd(ht, curr, index);

	else if (curr && put_before == 1)
		put_before_node(ht, curr, index);
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
			set_head_and_tail(ht, index);
		else
			set_snode(ht, index);
		//	printf("    >>%s\n", ht->array[index]->key);
	}
	else
	{

		shash_node_t *curr = ht->array[index];
		shash_node_t *prev = NULL;

		while (curr != NULL)
		{
			/*update old value*/
			if (!strcmp(curr->key, key))
			{
				free(curr->value);
				curr->value = strdup(value);
				return (1);
			}

			if (curr->next == NULL)
				prev = curr;

			curr = curr->next;
		}
		if (curr == NULL && prev != NULL)
		{
			curr = malloc(sizeof(shash_node_t));
			curr->key = strdup(key);
			curr->value = strdup(value);

			prev->next = curr;
			curr->next = NULL;
		}
	}

	return 0;
}
void put_before_node(shash_table_t *ht, shash_node_t *curr, size_t index)
{
	// shash_node_t *node = malloc(sizeof(shash_node_t));

	// node->key = ht->array[index]->key;
	// node->value = ht->array[index]->value;
	// node->next = NULL;

	// node->sprev = curr->sprev;
	// node->snext = curr;
	// if (node->sprev)
	// 	curr->sprev->snext = node;
	// curr->sprev = node;

	if (curr->sprev)
	{ /**insert before the current node (curr)*/
		ht->array[index]->snext = curr;
		ht->array[index]->sprev = curr->sprev;
		curr->sprev->snext = ht->array[index];
		curr->sprev = ht->array[index];
	}
	else
	{
		/**
		 * insert at the begining (as stack)
		 * (if the array empty or contain 1 element)
		 */
		curr->sprev = ht->array[index];
		ht->array[index]->snext = curr;
		ht->array[index]->sprev = NULL;
		ht->shead = ht->array[index];
	}
}

int main2()
{
	shash_table_t *ht = shash_table_create(1024);
	shash_table_set(ht, "a", "100k");
	shash_table_set(ht, "j", "150kk");
	shash_table_set(ht, "c", "50k");
	shash_table_set(ht, "b", "150kk");
	shash_table_set(ht, "c", "150k");

	// printf("%s\n", ht->array[key_index("p", ht->size)]->value);
	// print_node_s(ht->shead);
	return 0;
}

void hash_table_print2(const shash_table_t *ht)
{
	size_t i;
	int first_meeting = 0;

	if (ht == NULL)
		return;

	/*hash_node_t *curr = NULL;*/
	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			shash_node_t *curr = ht->array[i];

			if (first_meeting)
				printf(", ");

			printf("'%s': '%s'", curr->key, curr->value);
			curr = curr->next;

			/*to do */
			while (curr != NULL)
			{
				printf(", ");

				printf("'%s': '%s'", curr->key, curr->value);

				curr = curr->next;
			}

			first_meeting = 1;
		}
	}
	puts("}");
}
void shash_table_delete(shash_table_t *ht)
{
	unsigned long i = 0;

	while (i < ht->size)
	{
		shash_node_t *curr = ht->array[i];

		while (curr != NULL)
		{
			shash_node_t *next = (curr)->next;

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

int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);
	shash_table_set(ht, "y", "0");
	print_node_s(ht->shead);
	shash_table_set(ht, "j", "1");
	print_node_s(ht->shead);
	shash_table_set(ht, "c", "2");
	print_node_s(ht->shead);
	shash_table_set(ht, "b", "3");
	print_node_s(ht->shead);
	shash_table_set(ht, "z", "4");
	print_node_s(ht->shead);
	shash_table_set(ht, "n", "5");
	print_node_s(ht->shead);
	shash_table_set(ht, "a", "6");
	print_node_s(ht->shead);
	shash_table_set(ht, "m", "7");
	print_node_s(ht->shead);
	shash_table_set(ht, "z", "8");
	print_node_s(ht->shead);
	shash_table_set(ht, "z", "8");
	print_node_s(ht->shead);
	shash_table_set(ht, "y", "80");
	print_node_s(ht->shead);
	shash_table_set(ht, "hetairas", "collision1");
	shash_table_set(ht, "mentioner", "collision2");
	print_node_s(ht->shead);
	hash_table_print2(ht);
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
