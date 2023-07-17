#ifndef _struct
#define _struct
/**
 * struct dog - structure of dog
 * @name: nom
 * @age: age of dog
 * @owner: proprio
 * Description: Fiche d'un chien que je ne connais pas
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
