#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - check
 * @b: integer to malloc
 **/
void *malloc_checked(unsigned int b)
{
	void *v;
	
	v = malloc(b);

	if (v == NULL)
	{
		free(v);
		exit (98);
	}
	return (v);
}
