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

	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
