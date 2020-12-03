#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to find
 * Return: pointer to character to find or NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return(0);
	}
	return (0);
}
