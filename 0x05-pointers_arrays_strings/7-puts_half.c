#include "holberton.h"
/**
 * puts_half - imprime desde la mitad
 * @str: cadena
 */
void puts_half(char *str)
{
	int i = 0, k = 0, j = 0, h = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		k++;
	}

	j = (k - 1) / 2;
	for (h = j + 1; h <= (k - 1); h++)
		{
		_putchar(str[h]);
		}
	_putchar('\n');
}
