#include "holberton.h"
/**
 * _len - serch of size of a  string
 * @string: stringn.
 * Return: size of string.
 */
int _len(char *string)
{
	int len;

	for (len = 0; string[len] != '\0'; len++)
	;
	return (len);
}
