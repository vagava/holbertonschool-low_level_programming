#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer array
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int count, aux, i;

	i = n - 1;
	for (count = 0; count < i; count++, i--)
	{
		aux = a[count];
		a[count] = a[i];
		a[i] = aux;
	}
}
