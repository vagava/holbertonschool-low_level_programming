#include "holberton.h"

/**
* _digits - recursive function to print all previous digits in num
*
* @n: number to print previous digits of
* Return: void
*/
void _digits(int n)
{
	if (((n / 10) < -9) || ((n / 10) > 9))
	{
		_digits(n / 10);
		if (n > 0)
			_putchar(((n / 10) % 10) + '0');
		else
			_putchar((((n / 10) % 10) * -1) + '0');
	}
	else
	{
		if (n < 0)
			_putchar(((n / 10) * -1) + '0');
		else
			_putchar((n / 10) + '0');
	}
}

/**
* print_number - prints an integer.
*
* @n: number to print
* Return: void
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n > 9 || n < -9)
		_digits(n);
	if (n < 0)
		_putchar(((n % 10) * -1) + '0');
	else
		_putchar((n % 10) + '0');
}


