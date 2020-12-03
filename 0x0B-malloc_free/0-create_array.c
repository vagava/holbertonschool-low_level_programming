#include "holberton.h"
/**
 * create_array - creates an array of chars, and initializes it with a char.
 * @size: size of buffer.
 * @c: char for initialize.
 * Return: pointer to buffer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
