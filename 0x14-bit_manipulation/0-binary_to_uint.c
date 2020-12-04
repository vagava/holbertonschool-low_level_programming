#include "holberton.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: binary
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res, i;
	int contador;

	if (b == NULL)
		return (0);
	for (contador = 0; b[contador]; contador++)
	{
		if (b[contador] != '0' && b[contador] != '1')
			return (0);
	}
	for (i = 1, res = 0, contador--; contador >= 0; contador--, i *= 2)
	{
		if (b[contador] == '1')
			res += i;
	}
	return (res);
}

