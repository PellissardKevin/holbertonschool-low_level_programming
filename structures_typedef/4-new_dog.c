#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new file for dog with name, age and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of a dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_dog;

	copy_dog = malloc(sizeof(struct dog));
	if (copy_dog == NULL)
		return (NULL);

	copy_dog->name = name;
	copy_dog->age = age;
	copy_dog->owner = owner;

	return (copy_dog);
}
