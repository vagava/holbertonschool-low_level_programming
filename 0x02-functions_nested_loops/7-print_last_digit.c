#include "holberton.h"
/**
 * print_last_digit - last digit
 * @n:number
 * Return: result
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
		_putchar (n + '0');
	}
	else
	{
		_putchar (n + '0');
	}
	return (n);
}

