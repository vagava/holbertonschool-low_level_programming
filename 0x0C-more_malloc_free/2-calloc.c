#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: elemnts
 * @size: size of data type in bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *v = malloc(nmemb * size);
	unsigned int i;

	if (v == NULL)
	{
		free(v);
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		free(v);
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*(v + i) = 0; /*esta inicalizado en null.*/
	}

	return (v);
}
