#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - print integer ordered
 * @min: element minimo
 * @max: element maximo
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, d = (max - min) + 1;
	int *a = NULL;

	if (min > max)
		return (NULL);

	a = malloc(d * sizeof(int));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; (min + i) <= max; i++)
		*(a + i) = min + i;
	return (a);
}
