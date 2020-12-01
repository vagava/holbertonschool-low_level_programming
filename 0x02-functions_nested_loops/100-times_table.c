#include "holberton.h"
/**
 * print_times_table - print a trable nxn
 * @n: munber of table
 */
void print_times_table(int n)
{
	int i = 0, j, mul;

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
			else if (mul <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(32);
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
