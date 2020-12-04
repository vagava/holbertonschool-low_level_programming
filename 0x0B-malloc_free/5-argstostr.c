#include "holberton.h"
/**
 * _len2d - serch of size of a array 2d
 * @av: elemntos array
 * @ac: cantidad de elemntos
 * Return: size of string.
 */
int _len2d(int ac, char **av)
{
	int len = 0, i, j;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		len += j;
	}
	return (len);
}
/**
 * argstostr - concatenates all the arguments
 * @av: argumentos
 * @ac: cantidad de argumentos
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int i, j, len;

	len = 0;
	if (ac == 0 || av == NULL)
		return (0);
	len = _len2d(ac, av);

	ptr = malloc((sizeof(char) * len + ac) + 1);
	if (ptr == NULL)
		return (0);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[len] = av[i][j];
			len++;
		}
		ptr[len] = '\n';
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
