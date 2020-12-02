#include "holberton.h"
/**
 * _strncpy - copies a string.
 * @dest: string destino.
 * @src: string para agregar.
 * @n:size.
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int contador = 0, size = 0;

	for (; dest[size] != '\0'; size++)
	{}
	for (contador = 0; ((contador < n) && (src[contador] != '\0')); contador++)
	{
		dest[size + contador] = src[contador];
	}
	dest[size + contador] = '\0';
	return (dest);
}
