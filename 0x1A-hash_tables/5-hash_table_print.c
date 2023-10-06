#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
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
			hash_node_t *curr = ht->array[i];

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