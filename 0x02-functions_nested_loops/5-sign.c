#include "holberton.h"
/**
 * print_sing - print the sing of a number
 * @n: number to check
 * Return: 1 if n is +, 0 if n is 0; -1 if n is -
 */
int print_sing(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
}
