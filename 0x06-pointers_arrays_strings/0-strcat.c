#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string destino
 * @src: string para agregar
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int contador = 0, size = 0;

	for (; dest[size] != '\0'; size++)
	{}
	for (contador = 0; src[contador] != '\0'; contador++)
	{
		dest[size + contador] = src[contador];
	}
	dest[size + contador] = '\0';
	return (dest);
}
