#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	int first_meet = 0;

	if (ht == NULL)
		return

			/*hash_node_t *curr = NULL;*/
			putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hash_node_t *curr = ht->array[i];

			if (first_meet)
				printf(", ");

			printf("'%s': '%s'", curr->key, curr->value);

			while (curr->next != NULL)
			{
				printf(", ");

				printf("'%s': '%s'", curr->key, curr->value);

				curr = curr->next;
			}

			first_meet = 1;
		}
	}
	puts("}");
}