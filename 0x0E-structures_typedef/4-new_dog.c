#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * new_dog -  function that creates a pointer to a  new dog.
 *
 * @parameters:
 * @name: name of the new dogo
 * @age: age of the new dogo
 * @owner: name of the owner of the new dogo
 * Return: a pointer to the new dogo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc((strlen(name) + 1) * sizeof(char));

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->name, name);

	my_dog->age = age;

	my_dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->owner, owner);

	return (my_dog);
}
