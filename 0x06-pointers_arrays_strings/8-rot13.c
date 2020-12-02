#include "holberton.h"
/**
 * rot13 - encodes a string.
 * @ptr: pointer to array.
 * Return: array modified.
 **/
char *rot13(char *ptr)
{
	int i, j;
	char allabc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ptr[i] != 0; i++)
	{
		for (j = 0; allabc[j] != 0; j++)
		{
			if (ptr[i] == allabc[j])
			{
				ptr[i] = new[j];
				break;
			}
		}
	}
	return (ptr);
}
