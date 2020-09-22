#include "holberton.h"
/**
 * main - print the word Holberton following by a new line
 *
 * Return: cero if true
 *
 */

int main(void)
{
	char c[] = "Holberton\n";
	int i;

	for (i = 0; c[i] != 00 ; i++)
	{
		_putchar (c [i]);
	}

_putchar('\n');

return (0);

}
