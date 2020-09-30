#include "holberton.h"
/**
 * rev_string - print in reverse
 * @str: string to print
 *
 */
void rev_string(char *str)
{

	int i, j, less = 0, x = 0, k;
	char str_r[1000];

	for (i = 0; str[i] != '\0'; i++)
	{
		less++;
	}
	for (j = (less - 1); j >= 0 ; j--)
	{
		str_r[x] = str[j];
		x++;
	}
	str_r[x + 1] = '\0';
	for (k = 0; k <= (less - 1); k++)
	{
		str[k] = str_r[k];
	}
}
