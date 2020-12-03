#include "holberton.h"
/**
 * _len - length of string
 * @ptr: pointer to string
 * Return: length of string
 */
int _len(char *ptr)
{
	int i;

	for (i = 0; ptr[i + 1] != '\0'; i++)
		{}
	return (i);
}
/**
* infinite_add - Adds two numbers
* @n1: Pointer to the first character of number 1
* @n2: Pointer to the first character of number 2
* @r: Buffer where to write the result
* @n: Buffer size
*
* Return: Pointer to the result of the string
*/
char *infinite_add(char *n1, char *n2, char *r, int n)
{
	int ln1 = 0, ln2 = 0, add = 0, i = n - 2;

	ln1 = _len(n1);
	ln2 = _len(n2);
	r[n - 1] = 0;

	while (i >= 0 && (ln1 >= 0 || ln2 >= 0))
	{
		add += (ln1 < 0 ? '0' : n1[ln1]) + (ln2 < 0 ? '0' : n2[ln2]);
		add -= 2 * '0';
		r[i] = add % 10 + '0';
		add /= 10;
		i--;
		ln1--;
		ln2--;
	}

	if ((i < ln1 || i < ln2) || (i < 0 && add))
	return (0);

	add ? r[i] = add + '0' : 1;
	i += add ? 0 : 1;

	return (r + i);
}
