#include "holberton.h"
/**
 * print_rev - print in reverse
 * @str: string to print
 *
 */
void print_rev(char *str)
{
	int len = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	i = len;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
}
