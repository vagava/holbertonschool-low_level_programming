#include "dog.h"
/**
 * free_dog - function that frees dogs.
 * @d:get a pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
