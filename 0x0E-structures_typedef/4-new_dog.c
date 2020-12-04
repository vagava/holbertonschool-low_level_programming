#include "dog.h"
/**
 * length - Measure the length of a string
 *
 * @string: The string to be measured
 *
 * Return: The length of the string
 */

int length(char *string)
{
	int i;

	for (i = 0; *(string + i); i++)
		;
	return (i);
}
/**
 * copy_S - Copy a string
 *
 * @original: The original string
 * @copy: The copy
 */

void copy_S(char *original, char *copy)
{
	int i;

	for (i = 0; i <= length(original); i++)
	{
		*(copy + i) = *(original + i);
	}
}

/**
 * new_dog - Create a new dog with given parameters
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: the owner of the dog
 *
 * Return: the created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(length(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = malloc(length(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	copy_S(name, dog->name);
	copy_S(owner, dog->owner);
	return (dog);
}
