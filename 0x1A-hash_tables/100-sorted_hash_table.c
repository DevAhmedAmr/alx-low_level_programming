#include "hash_tables.h"

void print_node(shash_node_t *node)
{
	shash_node_t *curr = node;
	while (curr != NULL)
	{
		printf("%s, %s ,", node->key, node->value);
		curr = curr->next;
	}
}
void shash_table_print(shash_table_t *ht)
{
	shash_node_t *node = ht->shead;
	shash_node_t *curr = node;
	int is_array_empty = 1;

	if (node == NULL)
		return;

	putchar('{');

	while (curr != NULL)
	{
		if (!is_array_empty)
			printf(", ");

		printf("'%s': '%s'", curr->key, curr->value);

		if (curr->snext == NULL)
			break;

		curr = curr->snext;
		is_array_empty = 0;
	}
	puts("}");
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
void set_shead_and_stail(shash_table_t *ht, size_t index)
{

	ht->array[index]->sprev = NULL;
	ht->array[index]->snext = NULL;
	ht->shead = ht->array[index];
	ht->stail = ht->array[index];
	ht->shead->snext = NULL;
	ht->shead->sprev = NULL;
}

void hash_table_print_unsorted(const shash_table_t *ht)
{
	size_t i;
	int first_meeting = 0;
	printf("**\n");
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
	shash_table_print(ht);
	shash_table_set(ht, "j", "1");
	shash_table_print(ht);
	shash_table_set(ht, "c", "2");
	shash_table_print(ht);
	shash_table_set(ht, "b", "3");
	shash_table_print(ht);
	shash_table_set(ht, "z", "4");
	shash_table_print(ht);
	shash_table_set(ht, "n", "5");
	shash_table_print(ht);
	shash_table_set(ht, "a", "6");
	shash_table_print(ht);
	shash_table_set(ht, "m", "7");
	shash_table_set(ht, "heliotropes", "8");
	shash_table_set(ht, "neurospora", "9");

	shash_table_print(ht);
	hash_table_print_unsorted(ht);

	// shash_table_print_rev(ht);
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
int main2()
{
	shash_table_t *ht = shash_table_create(1024);
	shash_table_set(ht, "a", "100k");

	shash_table_set(ht, "j", "150kk");
	shash_table_set(ht, "c", "50k");
	shash_table_set(ht, "b", "150kk");
	shash_table_set(ht, "c", "150k");
	hash_table_print_unsorted(ht);

	shash_table_print(ht);
	// shash_table_print_rev(ht);
	shash_table_delete(ht);

	return 0;
}
