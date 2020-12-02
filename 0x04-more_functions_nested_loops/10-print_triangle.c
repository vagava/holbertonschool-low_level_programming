#include "holberton.h"
/**
 * print_triangle -  prints a triangle.
 * @size:   is the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1 ; j <= size ; j++)
			{
				if (i > (size - j))
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

