#include"dog.h"
#include<stdio.h>
/**
 * init_dog - function that takes apointer to struct and sets its values
 *
 * parameters:
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dogo
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
