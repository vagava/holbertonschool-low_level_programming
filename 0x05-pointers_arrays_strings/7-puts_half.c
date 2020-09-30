#include "holberton.h"
/**
 *
 *
 */
void puts_half(char *str)
{
	int i = 0, k = 0, j = 0, h = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		k++;
	}

	j = (k - 1)/2;
	for (h = j; h <= (k - 1); h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
