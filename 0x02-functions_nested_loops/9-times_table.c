#include "holberton.h"
/**
 * times_table - print a trable 9x9
 * Return: void
 *
 */
void times_table(void)
{
	int i = 0, j, r;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			r = i * j;
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
			_putchar(44);
			_putchar(32);
			_putchar(32);
			j++;
		}
		_putchar(10);
		i++;
	}
}
