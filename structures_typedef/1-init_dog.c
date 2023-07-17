#include "dog.h"
/**
 * init_dog - initialise a dog file
 * @name: name of dog
 * @age: age of dog
 * @owner: onwer of dog
 * struct dog - structure of dog
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
