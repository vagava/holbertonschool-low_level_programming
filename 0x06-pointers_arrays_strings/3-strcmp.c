#include "holberton.h"
/**
 * _strcmp- compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: a.
 */
int _strcmp(char *s1, char *s2)
{
	int a, i;

	for (i = 0; s1[i] != 0; i++)
	{
		a = s1[i] - s2[i];
		if (a != 0)
			return (a);
	}
	return (a);
}
