#include "holberton.h"
/**
* _atoi - converts a string to an integer
* @s: string to convert
* Return: value of integer
*/
int _atoi(char *s)
{
	int i, j, res, signo;

	i = res = 0;
	signo = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			signo *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		res = res * 10 + signo * (*(s + j) - '0');
		j++;
	}
	return (res);
}
