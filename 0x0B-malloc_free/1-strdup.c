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
 * _strdup - contains a copy of the string given as a parameter.
 * @str: string to  copy
 * Return: pointer to new string.
 */
char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	if (str == NULL)
		return (NULL);

	len = _len(str);
	printf("len is: %d\n", len);
	ptr = (char *)malloc((len) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
