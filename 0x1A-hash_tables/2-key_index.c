#include "hash_tables.h"
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	long unsigned int index = hash_djb2(key);
	return index % size;
}
