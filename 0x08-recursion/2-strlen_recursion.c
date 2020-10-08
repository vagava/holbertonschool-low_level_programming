#include "holberton.h"
/**
 * _strlen_recursion - contar caracteres
 * @s: string
 * Return: number of chars
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1);
		n = n + 1;
	}
	return (n);
}
