#include "holberton.h"
/**
 * swap_int - swap value
 * @a: value 1
 * @b: value 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
