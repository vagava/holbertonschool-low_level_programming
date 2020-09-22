#include "holberton.h"
/**
 * _isalpha - check if c in alphabet
 * @c: variable to check
 * Return: 1 if true or 0 else.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
