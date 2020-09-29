#include "holberton.h"
/**
 * _strlen - length of string
 * @s: string
 * Return: lenght
 */

int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
