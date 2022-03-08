#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - struct of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: pointer
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

