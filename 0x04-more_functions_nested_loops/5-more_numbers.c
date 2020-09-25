#include "holberton.h"
/**
 *  more_numbers - print filas y columnas
 *
 *
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
		_putchar((i % 10) + 48);
		}
	_putchar('\n');
	}
}
