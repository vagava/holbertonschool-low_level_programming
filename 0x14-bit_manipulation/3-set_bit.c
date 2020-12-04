#include "holberton.h"
/**
  * set_bit - sets the value of a bit
  * @n: pointer.
  * @index: index.
  * Return: the value
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
