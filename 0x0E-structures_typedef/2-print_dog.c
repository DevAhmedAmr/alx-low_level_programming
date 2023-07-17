#include"dog.h"
#include<stdio.h>
/**
 * print_dog - function that prints dog struct variables content
 *
 * parameters:
 * @d: pointer to the struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
}
