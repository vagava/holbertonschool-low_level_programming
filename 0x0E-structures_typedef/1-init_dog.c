#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: a pointer to the structure.
 * @name: a pointer to the var name.
 * @age: a var to the age;
 * @owner: a pointer to the dog owner.
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
