#include "dog.h"
/**
 * c_s - Copy a string
 *
 * @str_inicial: The str_inicial string
 * @copy: The copy
 */

void c_s(char *str_inicial, char *copy)
{
	int i;

	for (i = 0; i <= length(str_inicial); i++)
	{
		*(copy + i) = *(str_inicial + i);
	}
}
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
	c_s(name, dog->name);
	c_s(owner, dog->owner);
	return (dog);
}
