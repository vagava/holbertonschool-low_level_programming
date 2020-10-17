#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: elemnts
 * @size: size of data type in bytes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *v = malloc(nmemb * size);
	unsigned int i;

	if (v == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*(v + i) = 0;
	}

	return (v);
}
