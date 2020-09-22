#include "holberton.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times in lowercase
 * Return: always 0
 *
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);

		}
	_putchar(10);
	}
}
