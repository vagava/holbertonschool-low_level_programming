#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate string
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: pointer concatenate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new = NULL;
	unsigned int c1, c2, a, res = 0, cp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (c1 = 0; s1[c1] != '\0'; c1++)
	{}
	for (c2 = 0; s2[c2] != '\0'; c2++)
	{}
	if (n >= c2)
		n = c2;
	res = c1 + n + 1;
	new = malloc(res * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (cp = 0; cp < c1; cp++)
	{
		*(new + cp) = *(s1 + cp);
	}
	for (a = 0 ; cp < res - 1; cp++, a++)
	{
		*(new + cp) = *(s2 + a);
	}
	*(new + cp) = '\0';
	return (new);
}
