#include "holberton.h"
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
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
