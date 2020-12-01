#include "holberton.h"
/**
 * _mul - print a digit of mul
 * @mul: multiplication comparator.
 */
void _mul(int mul)
{
	if (mul <= 9)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(32);
		_putchar(mul + '0');
	}
	else if (mul >= 10 && mul <= 99)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(mul / 10 + '0');
		_putchar(mul % 10 + '0');
	}
	else if (mul >= 100 && mul < 226)
	{
		_putchar(44);
		_putchar(32);
		_putchar((mul / 100) + '0');
		_putchar(((mul - 100) / 10) + '0');
		_putchar(mul % 10 + '0');
	}
}
/**
 * print_times_table - print a trable nxn
 * @n: munber of table
 */
void print_times_table(int n)
{
	int i = 0, j, mul;

	if (n > 15 || n < 0)
		return;

	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			mul = i * j;
			if (j == 0)
			{
				_putchar(mul + '0');
			}
			else
			{
				_mul(mul);
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}
