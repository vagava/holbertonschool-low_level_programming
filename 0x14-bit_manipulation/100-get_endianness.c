#include "holberton.h"
/**
 * get_endianness- function that inserts a new node
 * Return: 1 little or 0 if big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *) &i;

	return ((int)*j);
}
