#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - check
 * @b: integer to malloc
 * Return: 0
 **/
void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);

	if (v == NULL)
	{
		exit(98);
	}
	return (v);
}
