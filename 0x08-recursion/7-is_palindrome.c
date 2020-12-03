#include "holberton.h"
/**
 * vericication_1 - tamaño de str_v1.
 * @str_v1: String
 * @v1: counter
 * Return: counter - 1
 */
int vericication_1(char *str_v1, int v1)
{
	if (*str_v1 == 0)
	{
		return (v1 - 1);
	}
	return (vericication_1(str_v1 + 1, v1 + 1));
}
/**
 * verification2 - tamaño de str_v2
 * @str_v2: String
 * @v2: counter
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int verification2(char *str_v2, int v2)
{
	if (*str_v2 != *(str_v2 + v2))
	{
		return (0);
	}
	else if (*str_v2 == 0)
	{
		return (1);
	}
	else
	{
		return (verification2(str_v2 + 1, v2 - 2));
	}
}

/**
 * is_palindrome - seacrh if a string is a palindrome
 * @s: String.
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int i;

	i = vericication_1(s, 0);
	return (verification2(s, i));
}
