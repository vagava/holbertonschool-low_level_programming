#include "holberton.h"
/**
 * print_array -  prints n elements of an array of integers
 * @n: is the number of elements of the array to be printed
 * @a: is the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		printf("%d", a[i]);
		else
		printf(", %d", a[i]);
	}
	printf("\n");
}
