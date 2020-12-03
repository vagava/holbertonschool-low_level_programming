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

/**
 * str_concat - concatenate two string.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	len1 = _len(s1);
	len2 = _len(s2);

	ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
