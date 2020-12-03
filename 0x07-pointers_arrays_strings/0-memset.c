#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to string
 * @b: constan char
 * @n: size of buffer
 * Return: pointer to sring modified.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
