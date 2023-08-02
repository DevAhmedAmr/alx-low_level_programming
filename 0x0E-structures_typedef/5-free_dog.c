#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - function that free dog_t struct from the memory
 *
 * parameters:
 * @d:struct to be freed from the memory
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);
	free(d);
	}
}
