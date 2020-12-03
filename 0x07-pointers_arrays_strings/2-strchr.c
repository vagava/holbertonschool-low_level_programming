#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to find
 * Return: pointer to character to find or NULL
 */
char *_strchr(char *s, char c)
{
	char *matched = NULL;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			matched = &s[i];
			return (matched);
		}
	}
	return (matched);
}
