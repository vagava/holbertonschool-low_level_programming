#include "holberton.h"
/**
* wildcmp - compares two string
* @s1: string 1
* @s2: string 2
* Return: 1 if identical, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (1);
	else if (s1 == NULL || s2 == NULL)
		return (0);

	if (*s1 == '\0')
	{
		if (*s2 == 42 && *(s2 + 1) == '\0')
			return (1);
		if (*s1 == *s2)
			return (1);
		else
			return (0);
	}
	if (*s2 == 42)
	{
		if (*(s2 + 1) == 42)
			return (wildcmp(s1, s2 + 1));
		if (*s1 == *(s2 + 1))
		{
			if ((wildcmp(s1, s2 + 1)) == 1)
				return (1);
		}
		return (wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
