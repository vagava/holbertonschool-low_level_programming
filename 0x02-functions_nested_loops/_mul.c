#include "holberton.h"
/**
 * _mul - print a digit of mul
 * @mul: multiplication comparator.
 */
void _mul(int mul)
{
	if (mul >= 10 && mul <= 99)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(mul / 10 + '0');
		_putchar(mul % 10 + '0');
	}
	else if (mul >= 100 && mul < 1000)
	{
		_putchar(44);
		_putchar(32);
		_putchar((mul / 100)+ '0');
		_putchar(((mul - 100) / 10) + '0');
		_putchar(mul % 10 + '0');
	}
}
