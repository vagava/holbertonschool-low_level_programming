#include "holberton.h"
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	if (needle[j] == '\0')
	{
		return (&haystack[0]);
	}
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (0);
}
