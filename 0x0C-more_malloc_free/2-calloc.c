#include "holberton.h"
#include <stdlib.h>
/**
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *v = malloc(nmemb * size);
	unsigned int i;

	for (i = 0; i < (nmemb * size); i++)
	{
		*(v + i) = 0;
	}

	return (v);
}
