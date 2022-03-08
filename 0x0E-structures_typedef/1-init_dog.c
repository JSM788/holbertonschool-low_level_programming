#include "dog.h"

/**
 * init_dog - struct of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: pointerr
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

