#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
// int main(void)
// {
// 	hash_table_t *ht;

// 	ht = hash_table_create(1);
// 	hash_table_set(ht, "USA", "Washington");
// 	hash_table_set(ht, "France", "Paris");
// 	hash_table_set(ht, "UK", "London");
// 	hash_table_set(ht, "Spain", "Madrid");
// 	hash_table_set(ht, "Germany", "Berlin");
// 	hash_table_set(ht, "China", "Beijing");
// 	hash_table_set(ht, "Russia", "Moscow");
// 	hash_table_set(ht, "Bahrain", "Manama");
// 	hash_table_set(ht, "Canada", "Ottawa");
// 	hash_table_set(ht, "Brazil", "Brasilia");
// 	hash_table_set(ht, "Sweden", "Stockholm");
// 	hash_table_set(ht, "Iceland", "Reykjavik");
// 	hash_table_set(ht, "Japan", "Tokyo");
// 	hash_table_set(ht, "Australia", "Canberra");

// 	hash_table_print(NULL);
// 	return (EXIT_SUCCESS);
// }
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "y", "0");
	hash_table_print(ht);
	hash_table_set(ht, "j", "1");
	hash_table_print(ht);
	hash_table_set(ht, "c", "2");
	hash_table_print(ht);
	hash_table_set(ht, "b", "3");
	hash_table_print(ht);
	hash_table_set(ht, "z", "4");
	hash_table_print(ht);
	hash_table_set(ht, "n", "5");
	hash_table_print(ht);
	hash_table_set(ht, "a", "6");
	hash_table_print(ht);
	hash_table_set(ht, "m", "7");
	hash_table_set(ht, "heliotropes", "8");
	hash_table_set(ht, "neurospora", "9");
	hash_table_print(ht);
	/*hash_table_print_unsorted(ht);*/

	/*hash_table_print_rev(ht);*/
	/*shash_table_delete(ht);*/
	return (EXIT_SUCCESS);
}