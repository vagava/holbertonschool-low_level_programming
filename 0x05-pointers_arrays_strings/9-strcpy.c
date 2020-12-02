#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: string destino
 * @src: string original
 * Return: pointer to string dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (src[i + 1] == '\0')
			dest[i + 1] = '\0';
	}
return (dest);
}
